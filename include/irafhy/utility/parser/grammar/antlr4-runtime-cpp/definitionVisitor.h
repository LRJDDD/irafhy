
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/definition.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "definitionParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by definitionParser.
 */
class  definitionVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by definitionParser.
   */
    virtual antlrcpp::Any visitCondition(definitionParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitPolytope(definitionParser::PolytopeContext *context) = 0;

    virtual antlrcpp::Any visitHpolytope(definitionParser::HpolytopeContext *context) = 0;

    virtual antlrcpp::Any visitVpolytope(definitionParser::VpolytopeContext *context) = 0;

    virtual antlrcpp::Any visitMatrix(definitionParser::MatrixContext *context) = 0;

    virtual antlrcpp::Any visitVector(definitionParser::VectorContext *context) = 0;

    virtual antlrcpp::Any visitIntervalhull(definitionParser::IntervalhullContext *context) = 0;

    virtual antlrcpp::Any visitConstraints(definitionParser::ConstraintsContext *context) = 0;

    virtual antlrcpp::Any visitConstraint(definitionParser::ConstraintContext *context) = 0;

    virtual antlrcpp::Any visitSystem(definitionParser::SystemContext *context) = 0;

    virtual antlrcpp::Any visitFormula(definitionParser::FormulaContext *context) = 0;

    virtual antlrcpp::Any visitInterval(definitionParser::IntervalContext *context) = 0;

    virtual antlrcpp::Any visitSqrtConstExp(definitionParser::SqrtConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAcothConstExp(definitionParser::AcothConstExpContext *context) = 0;

    virtual antlrcpp::Any visitLogConstExp(definitionParser::LogConstExpContext *context) = 0;

    virtual antlrcpp::Any visitTanhConstExp(definitionParser::TanhConstExpContext *context) = 0;

    virtual antlrcpp::Any visitPowConstExp(definitionParser::PowConstExpContext *context) = 0;

    virtual antlrcpp::Any visitPosConstExp(definitionParser::PosConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAtanhConstExp(definitionParser::AtanhConstExpContext *context) = 0;

    virtual antlrcpp::Any visitSqrConstExp(definitionParser::SqrConstExpContext *context) = 0;

    virtual antlrcpp::Any visitConstExpBra(definitionParser::ConstExpBraContext *context) = 0;

    virtual antlrcpp::Any visitSinhConstExp(definitionParser::SinhConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAtanConstExp(definitionParser::AtanConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAsinhConstExp(definitionParser::AsinhConstExpContext *context) = 0;

    virtual antlrcpp::Any visitConstExp(definitionParser::ConstExpContext *context) = 0;

    virtual antlrcpp::Any visitNegConstExp(definitionParser::NegConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAsinConstExp(definitionParser::AsinConstExpContext *context) = 0;

    virtual antlrcpp::Any visitTanConstExp(definitionParser::TanConstExpContext *context) = 0;

    virtual antlrcpp::Any visitNexpConstExp(definitionParser::NexpConstExpContext *context) = 0;

    virtual antlrcpp::Any visitCosConstExp(definitionParser::CosConstExpContext *context) = 0;

    virtual antlrcpp::Any visitConstExpMulDiv(definitionParser::ConstExpMulDivContext *context) = 0;

    virtual antlrcpp::Any visitExpConstExp(definitionParser::ExpConstExpContext *context) = 0;

    virtual antlrcpp::Any visitCotConstExp(definitionParser::CotConstExpContext *context) = 0;

    virtual antlrcpp::Any visitCoshConstExp(definitionParser::CoshConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAcoshConstExp(definitionParser::AcoshConstExpContext *context) = 0;

    virtual antlrcpp::Any visitSinConstExp(definitionParser::SinConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAcosConstExp(definitionParser::AcosConstExpContext *context) = 0;

    virtual antlrcpp::Any visitConstExpAddSub(definitionParser::ConstExpAddSubContext *context) = 0;

    virtual antlrcpp::Any visitLnConstExp(definitionParser::LnConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAcotConstExp(definitionParser::AcotConstExpContext *context) = 0;

    virtual antlrcpp::Any visitTanExp(definitionParser::TanExpContext *context) = 0;

    virtual antlrcpp::Any visitSqrExp(definitionParser::SqrExpContext *context) = 0;

    virtual antlrcpp::Any visitConstant(definitionParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitAsinhExp(definitionParser::AsinhExpContext *context) = 0;

    virtual antlrcpp::Any visitAcosExp(definitionParser::AcosExpContext *context) = 0;

    virtual antlrcpp::Any visitAcothExp(definitionParser::AcothExpContext *context) = 0;

    virtual antlrcpp::Any visitAcoshExp(definitionParser::AcoshExpContext *context) = 0;

    virtual antlrcpp::Any visitCosExp(definitionParser::CosExpContext *context) = 0;

    virtual antlrcpp::Any visitPowExp(definitionParser::PowExpContext *context) = 0;

    virtual antlrcpp::Any visitCothExp(definitionParser::CothExpContext *context) = 0;

    virtual antlrcpp::Any visitPosExp(definitionParser::PosExpContext *context) = 0;

    virtual antlrcpp::Any visitNegExp(definitionParser::NegExpContext *context) = 0;

    virtual antlrcpp::Any visitExpBra(definitionParser::ExpBraContext *context) = 0;

    virtual antlrcpp::Any visitAtanhExp(definitionParser::AtanhExpContext *context) = 0;

    virtual antlrcpp::Any visitSinExp(definitionParser::SinExpContext *context) = 0;

    virtual antlrcpp::Any visitLnExp(definitionParser::LnExpContext *context) = 0;

    virtual antlrcpp::Any visitTanhExp(definitionParser::TanhExpContext *context) = 0;

    virtual antlrcpp::Any visitSqrtExp(definitionParser::SqrtExpContext *context) = 0;

    virtual antlrcpp::Any visitExpMulDiv(definitionParser::ExpMulDivContext *context) = 0;

    virtual antlrcpp::Any visitAtanExp(definitionParser::AtanExpContext *context) = 0;

    virtual antlrcpp::Any visitAcotExp(definitionParser::AcotExpContext *context) = 0;

    virtual antlrcpp::Any visitExpExp(definitionParser::ExpExpContext *context) = 0;

    virtual antlrcpp::Any visitCoshExp(definitionParser::CoshExpContext *context) = 0;

    virtual antlrcpp::Any visitLogExp(definitionParser::LogExpContext *context) = 0;

    virtual antlrcpp::Any visitAsinExp(definitionParser::AsinExpContext *context) = 0;

    virtual antlrcpp::Any visitCotExp(definitionParser::CotExpContext *context) = 0;

    virtual antlrcpp::Any visitVariable(definitionParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitSinhExp(definitionParser::SinhExpContext *context) = 0;

    virtual antlrcpp::Any visitNexpExp(definitionParser::NexpExpContext *context) = 0;

    virtual antlrcpp::Any visitExpAddSub(definitionParser::ExpAddSubContext *context) = 0;


};

