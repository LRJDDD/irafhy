#include <gtest/gtest.h>
#include <vector>
#include <string>
#include <fstream>
#include <boost/filesystem.hpp>
#include <irafhy/utility/solver/CSPSolver.h>
#include <irafhy/representation/geometric/intervalHull.h>
#include <irafhy/utility/parser/visitor/constriantsVisitor.h>
#include <irafhy/utility/viewer.h>

class runCSPSolverTest : public ::testing::Test
{
protected:
	void SetUp() override
	{
		//set contraints paths
		std::size_t startPos = rootPath.find("IRafhy");
		if (startPos == std::string::npos)
			startPos = rootPath.find("irafhy");
		rootPath	= rootPath.substr(0, startPos + 6);
		case_0_path = rootPath + case_0_path;
		case_1_path = rootPath + case_1_path;
		case_2_path = rootPath + case_2_path;
		case_0_ifstream.open(case_0_path);
		case_1_ifstream.open(case_1_path);
		case_2_ifstream.open(case_2_path);
		//construct 2d interval hull
		std::vector<capd::interval> _2dConstraints;
		_2dConstraints.emplace_back(capd::interval(-1.22, 2.57));
		_2dConstraints.emplace_back(capd::interval(-3.2, 5.13));
		_2dIntervalHull = irafhy::IntervalHull(_2dConstraints);
		//construct 3d interval hull
		std::vector<capd::interval> _3dConstraints;
		_3dConstraints.emplace_back(capd::interval(2.19, 3.37));
		_3dConstraints.emplace_back(capd::interval(1.11, 5.96));
		_3dConstraints.emplace_back(capd::interval(-3.22, 7.23));
		_3dIntervalHull = irafhy::IntervalHull(_3dConstraints);
		//construct 7d interval hull
		std::vector<capd::interval> _5dConstraints;
		_5dConstraints.emplace_back(capd::interval(1.11, 2.35));
		_5dConstraints.emplace_back(capd::interval(0.25, 9.44));
		_5dConstraints.emplace_back(capd::interval(-3.44, -0.13));
		_5dConstraints.emplace_back(capd::interval(0.0, 0.0));
		_5dConstraints.emplace_back(capd::interval(-2.35, 4.4));
		_5dIntervalHull = irafhy::IntervalHull(_5dConstraints);
	}
	void TearDown() override
	{
		//TODO
	}
	int					 sampleCnt;
	irafhy::IntervalHull _2dIntervalHull;
	irafhy::IntervalHull _3dIntervalHull;
	irafhy::IntervalHull _5dIntervalHull;
	std::string			 rootPath	= boost::filesystem::current_path().string();
	std::string			 case_0_path = "/resource/script/constraints_0.expr";
	std::string			 case_1_path = "/resource/script/constraints_1.expr";
	std::string			 case_2_path = "/resource/script/constraints_2.expr";
	std::ifstream		 case_0_ifstream;
	std::ifstream		 case_1_ifstream;
	std::ifstream		 case_2_ifstream;
};

TEST_F(runCSPSolverTest, case_0)
{
	double							  curEpsilon = 0.5;
	std::vector<irafhy::IntervalHull> boundaryIntervalHulls
		= irafhy::CSPSolver::exactBoundarySolve(this->_2dIntervalHull, curEpsilon);
	boundaryIntervalHulls.emplace_back(this->_2dIntervalHull);
	for (const auto& intervalHull : boundaryIntervalHulls)
		std::cout << intervalHull << std::endl;
	irafhy::viewer::show(boundaryIntervalHulls, {}, {}, {0, 1}, irafhy::VIEW_TYPE::LINE);
}

TEST_F(runCSPSolverTest, case_1)
{
	double							  curEpsilon = 0.25;
	std::vector<irafhy::IntervalHull> boundaryIntervalHulls
		= irafhy::CSPSolver::exactBoundarySolve(this->_3dIntervalHull, curEpsilon);
	boundaryIntervalHulls.emplace_back(this->_3dIntervalHull);
	irafhy::viewer::show(boundaryIntervalHulls, {}, {}, {0, 1, 2}, irafhy::VIEW_TYPE::LINE);
}

TEST_F(runCSPSolverTest, case_2)
{
	double							  curEpsilon = 0.05;
	std::vector<irafhy::IntervalHull> boundaryIntervalHulls
		= irafhy::CSPSolver::branchPruneSolve(this->_2dIntervalHull, curEpsilon);
	boundaryIntervalHulls.emplace_back(this->_2dIntervalHull);
	for (const auto& intervalHull : boundaryIntervalHulls)
		std::cout << intervalHull << std::endl;
	irafhy::viewer::show(boundaryIntervalHulls, {}, {}, {0, 1}, irafhy::VIEW_TYPE::LINE);
}

TEST_F(runCSPSolverTest, case_3)
{
	antlr4::ANTLRInputStream constraintsAntlrInputStream(this->case_2_ifstream);
	// antlr4::ANTLRInputStream				   constraintsAntlrInputStream(this->case_0_ifstream);
	hybridautomatonLexer					   constraintsLexer(&constraintsAntlrInputStream);
	antlr4::CommonTokenStream				   constraintsCommonTokenStream(&constraintsLexer);
	hybridautomatonParser					   constraintsParser(&constraintsCommonTokenStream);
	hybridautomatonParser::ConstraintsContext* constraintsContext = constraintsParser.constraints();
	std::vector<std::string>				   vars				  = {"x", "y"};
	irafhy::ConstraintsVisitor				   constraintsVisitor(vars);
	irafhy::Constraints						   constraints = constraintsVisitor.visit(constraintsContext);
	std::cout << constraints << std::endl;
	double							  curEpsilon = 0.1;
	std::vector<irafhy::IntervalHull> boundaryIntervalHulls
		= irafhy::CSPSolver::branchPruneSolve(constraints, curEpsilon);
	irafhy::viewer::show(boundaryIntervalHulls, {}, {}, {0, 1}, irafhy::VIEW_TYPE::LINE);
}

TEST_F(runCSPSolverTest, case_4)
{
	antlr4::ANTLRInputStream constraintsAntlrInputStream(this->case_1_ifstream);
	// antlr4::ANTLRInputStream				   constraintsAntlrInputStream(this->case_0_ifstream);
	hybridautomatonLexer					   constraintsLexer(&constraintsAntlrInputStream);
	antlr4::CommonTokenStream				   constraintsCommonTokenStream(&constraintsLexer);
	hybridautomatonParser					   constraintsParser(&constraintsCommonTokenStream);
	hybridautomatonParser::ConstraintsContext* constraintsContext = constraintsParser.constraints();
	std::vector<std::string>				   vars				  = {"x", "y", "z"};
	irafhy::ConstraintsVisitor				   constraintsVisitor(vars);
	irafhy::Constraints						   constraints = constraintsVisitor.visit(constraintsContext);
	std::cout << constraints << std::endl;
	double							  curEpsilon = 0.05;
	std::vector<irafhy::IntervalHull> boundaryIntervalHulls
		= irafhy::CSPSolver::branchPruneSolve(constraints, curEpsilon);
	for (const auto& intervalHull : boundaryIntervalHulls)
		std::cout << intervalHull << std::endl;
	irafhy::viewer::show(boundaryIntervalHulls, {}, {}, {0, 1, 2}, irafhy::VIEW_TYPE::LINE);
}