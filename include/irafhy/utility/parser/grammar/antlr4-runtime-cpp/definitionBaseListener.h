
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/definition.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "definitionListener.h"


/**
 * This class provides an empty implementation of definitionListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  definitionBaseListener : public definitionListener {
public:

  virtual void enterCondition(definitionParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(definitionParser::ConditionContext * /*ctx*/) override { }

  virtual void enterPolytope(definitionParser::PolytopeContext * /*ctx*/) override { }
  virtual void exitPolytope(definitionParser::PolytopeContext * /*ctx*/) override { }

  virtual void enterHpolytope(definitionParser::HpolytopeContext * /*ctx*/) override { }
  virtual void exitHpolytope(definitionParser::HpolytopeContext * /*ctx*/) override { }

  virtual void enterVpolytope(definitionParser::VpolytopeContext * /*ctx*/) override { }
  virtual void exitVpolytope(definitionParser::VpolytopeContext * /*ctx*/) override { }

  virtual void enterMatrix(definitionParser::MatrixContext * /*ctx*/) override { }
  virtual void exitMatrix(definitionParser::MatrixContext * /*ctx*/) override { }

  virtual void enterVector(definitionParser::VectorContext * /*ctx*/) override { }
  virtual void exitVector(definitionParser::VectorContext * /*ctx*/) override { }

  virtual void enterIntervalhull(definitionParser::IntervalhullContext * /*ctx*/) override { }
  virtual void exitIntervalhull(definitionParser::IntervalhullContext * /*ctx*/) override { }

  virtual void enterConstraints(definitionParser::ConstraintsContext * /*ctx*/) override { }
  virtual void exitConstraints(definitionParser::ConstraintsContext * /*ctx*/) override { }

  virtual void enterConstraint(definitionParser::ConstraintContext * /*ctx*/) override { }
  virtual void exitConstraint(definitionParser::ConstraintContext * /*ctx*/) override { }

  virtual void enterSystem(definitionParser::SystemContext * /*ctx*/) override { }
  virtual void exitSystem(definitionParser::SystemContext * /*ctx*/) override { }

  virtual void enterFormula(definitionParser::FormulaContext * /*ctx*/) override { }
  virtual void exitFormula(definitionParser::FormulaContext * /*ctx*/) override { }

  virtual void enterInterval(definitionParser::IntervalContext * /*ctx*/) override { }
  virtual void exitInterval(definitionParser::IntervalContext * /*ctx*/) override { }

  virtual void enterSqrtConstExp(definitionParser::SqrtConstExpContext * /*ctx*/) override { }
  virtual void exitSqrtConstExp(definitionParser::SqrtConstExpContext * /*ctx*/) override { }

  virtual void enterAcothConstExp(definitionParser::AcothConstExpContext * /*ctx*/) override { }
  virtual void exitAcothConstExp(definitionParser::AcothConstExpContext * /*ctx*/) override { }

  virtual void enterLogConstExp(definitionParser::LogConstExpContext * /*ctx*/) override { }
  virtual void exitLogConstExp(definitionParser::LogConstExpContext * /*ctx*/) override { }

  virtual void enterTanhConstExp(definitionParser::TanhConstExpContext * /*ctx*/) override { }
  virtual void exitTanhConstExp(definitionParser::TanhConstExpContext * /*ctx*/) override { }

  virtual void enterPowConstExp(definitionParser::PowConstExpContext * /*ctx*/) override { }
  virtual void exitPowConstExp(definitionParser::PowConstExpContext * /*ctx*/) override { }

  virtual void enterPosConstExp(definitionParser::PosConstExpContext * /*ctx*/) override { }
  virtual void exitPosConstExp(definitionParser::PosConstExpContext * /*ctx*/) override { }

  virtual void enterAtanhConstExp(definitionParser::AtanhConstExpContext * /*ctx*/) override { }
  virtual void exitAtanhConstExp(definitionParser::AtanhConstExpContext * /*ctx*/) override { }

  virtual void enterSqrConstExp(definitionParser::SqrConstExpContext * /*ctx*/) override { }
  virtual void exitSqrConstExp(definitionParser::SqrConstExpContext * /*ctx*/) override { }

  virtual void enterConstExpBra(definitionParser::ConstExpBraContext * /*ctx*/) override { }
  virtual void exitConstExpBra(definitionParser::ConstExpBraContext * /*ctx*/) override { }

  virtual void enterSinhConstExp(definitionParser::SinhConstExpContext * /*ctx*/) override { }
  virtual void exitSinhConstExp(definitionParser::SinhConstExpContext * /*ctx*/) override { }

  virtual void enterAtanConstExp(definitionParser::AtanConstExpContext * /*ctx*/) override { }
  virtual void exitAtanConstExp(definitionParser::AtanConstExpContext * /*ctx*/) override { }

  virtual void enterAsinhConstExp(definitionParser::AsinhConstExpContext * /*ctx*/) override { }
  virtual void exitAsinhConstExp(definitionParser::AsinhConstExpContext * /*ctx*/) override { }

  virtual void enterConstExp(definitionParser::ConstExpContext * /*ctx*/) override { }
  virtual void exitConstExp(definitionParser::ConstExpContext * /*ctx*/) override { }

  virtual void enterNegConstExp(definitionParser::NegConstExpContext * /*ctx*/) override { }
  virtual void exitNegConstExp(definitionParser::NegConstExpContext * /*ctx*/) override { }

  virtual void enterAsinConstExp(definitionParser::AsinConstExpContext * /*ctx*/) override { }
  virtual void exitAsinConstExp(definitionParser::AsinConstExpContext * /*ctx*/) override { }

  virtual void enterTanConstExp(definitionParser::TanConstExpContext * /*ctx*/) override { }
  virtual void exitTanConstExp(definitionParser::TanConstExpContext * /*ctx*/) override { }

  virtual void enterNexpConstExp(definitionParser::NexpConstExpContext * /*ctx*/) override { }
  virtual void exitNexpConstExp(definitionParser::NexpConstExpContext * /*ctx*/) override { }

  virtual void enterCosConstExp(definitionParser::CosConstExpContext * /*ctx*/) override { }
  virtual void exitCosConstExp(definitionParser::CosConstExpContext * /*ctx*/) override { }

  virtual void enterConstExpMulDiv(definitionParser::ConstExpMulDivContext * /*ctx*/) override { }
  virtual void exitConstExpMulDiv(definitionParser::ConstExpMulDivContext * /*ctx*/) override { }

  virtual void enterExpConstExp(definitionParser::ExpConstExpContext * /*ctx*/) override { }
  virtual void exitExpConstExp(definitionParser::ExpConstExpContext * /*ctx*/) override { }

  virtual void enterCotConstExp(definitionParser::CotConstExpContext * /*ctx*/) override { }
  virtual void exitCotConstExp(definitionParser::CotConstExpContext * /*ctx*/) override { }

  virtual void enterCoshConstExp(definitionParser::CoshConstExpContext * /*ctx*/) override { }
  virtual void exitCoshConstExp(definitionParser::CoshConstExpContext * /*ctx*/) override { }

  virtual void enterAcoshConstExp(definitionParser::AcoshConstExpContext * /*ctx*/) override { }
  virtual void exitAcoshConstExp(definitionParser::AcoshConstExpContext * /*ctx*/) override { }

  virtual void enterSinConstExp(definitionParser::SinConstExpContext * /*ctx*/) override { }
  virtual void exitSinConstExp(definitionParser::SinConstExpContext * /*ctx*/) override { }

  virtual void enterAcosConstExp(definitionParser::AcosConstExpContext * /*ctx*/) override { }
  virtual void exitAcosConstExp(definitionParser::AcosConstExpContext * /*ctx*/) override { }

  virtual void enterConstExpAddSub(definitionParser::ConstExpAddSubContext * /*ctx*/) override { }
  virtual void exitConstExpAddSub(definitionParser::ConstExpAddSubContext * /*ctx*/) override { }

  virtual void enterLnConstExp(definitionParser::LnConstExpContext * /*ctx*/) override { }
  virtual void exitLnConstExp(definitionParser::LnConstExpContext * /*ctx*/) override { }

  virtual void enterAcotConstExp(definitionParser::AcotConstExpContext * /*ctx*/) override { }
  virtual void exitAcotConstExp(definitionParser::AcotConstExpContext * /*ctx*/) override { }

  virtual void enterTanExp(definitionParser::TanExpContext * /*ctx*/) override { }
  virtual void exitTanExp(definitionParser::TanExpContext * /*ctx*/) override { }

  virtual void enterSqrExp(definitionParser::SqrExpContext * /*ctx*/) override { }
  virtual void exitSqrExp(definitionParser::SqrExpContext * /*ctx*/) override { }

  virtual void enterConstant(definitionParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(definitionParser::ConstantContext * /*ctx*/) override { }

  virtual void enterAsinhExp(definitionParser::AsinhExpContext * /*ctx*/) override { }
  virtual void exitAsinhExp(definitionParser::AsinhExpContext * /*ctx*/) override { }

  virtual void enterAcosExp(definitionParser::AcosExpContext * /*ctx*/) override { }
  virtual void exitAcosExp(definitionParser::AcosExpContext * /*ctx*/) override { }

  virtual void enterAcothExp(definitionParser::AcothExpContext * /*ctx*/) override { }
  virtual void exitAcothExp(definitionParser::AcothExpContext * /*ctx*/) override { }

  virtual void enterAcoshExp(definitionParser::AcoshExpContext * /*ctx*/) override { }
  virtual void exitAcoshExp(definitionParser::AcoshExpContext * /*ctx*/) override { }

  virtual void enterCosExp(definitionParser::CosExpContext * /*ctx*/) override { }
  virtual void exitCosExp(definitionParser::CosExpContext * /*ctx*/) override { }

  virtual void enterPowExp(definitionParser::PowExpContext * /*ctx*/) override { }
  virtual void exitPowExp(definitionParser::PowExpContext * /*ctx*/) override { }

  virtual void enterCothExp(definitionParser::CothExpContext * /*ctx*/) override { }
  virtual void exitCothExp(definitionParser::CothExpContext * /*ctx*/) override { }

  virtual void enterPosExp(definitionParser::PosExpContext * /*ctx*/) override { }
  virtual void exitPosExp(definitionParser::PosExpContext * /*ctx*/) override { }

  virtual void enterNegExp(definitionParser::NegExpContext * /*ctx*/) override { }
  virtual void exitNegExp(definitionParser::NegExpContext * /*ctx*/) override { }

  virtual void enterExpBra(definitionParser::ExpBraContext * /*ctx*/) override { }
  virtual void exitExpBra(definitionParser::ExpBraContext * /*ctx*/) override { }

  virtual void enterAtanhExp(definitionParser::AtanhExpContext * /*ctx*/) override { }
  virtual void exitAtanhExp(definitionParser::AtanhExpContext * /*ctx*/) override { }

  virtual void enterSinExp(definitionParser::SinExpContext * /*ctx*/) override { }
  virtual void exitSinExp(definitionParser::SinExpContext * /*ctx*/) override { }

  virtual void enterLnExp(definitionParser::LnExpContext * /*ctx*/) override { }
  virtual void exitLnExp(definitionParser::LnExpContext * /*ctx*/) override { }

  virtual void enterTanhExp(definitionParser::TanhExpContext * /*ctx*/) override { }
  virtual void exitTanhExp(definitionParser::TanhExpContext * /*ctx*/) override { }

  virtual void enterSqrtExp(definitionParser::SqrtExpContext * /*ctx*/) override { }
  virtual void exitSqrtExp(definitionParser::SqrtExpContext * /*ctx*/) override { }

  virtual void enterExpMulDiv(definitionParser::ExpMulDivContext * /*ctx*/) override { }
  virtual void exitExpMulDiv(definitionParser::ExpMulDivContext * /*ctx*/) override { }

  virtual void enterAtanExp(definitionParser::AtanExpContext * /*ctx*/) override { }
  virtual void exitAtanExp(definitionParser::AtanExpContext * /*ctx*/) override { }

  virtual void enterAcotExp(definitionParser::AcotExpContext * /*ctx*/) override { }
  virtual void exitAcotExp(definitionParser::AcotExpContext * /*ctx*/) override { }

  virtual void enterExpExp(definitionParser::ExpExpContext * /*ctx*/) override { }
  virtual void exitExpExp(definitionParser::ExpExpContext * /*ctx*/) override { }

  virtual void enterCoshExp(definitionParser::CoshExpContext * /*ctx*/) override { }
  virtual void exitCoshExp(definitionParser::CoshExpContext * /*ctx*/) override { }

  virtual void enterLogExp(definitionParser::LogExpContext * /*ctx*/) override { }
  virtual void exitLogExp(definitionParser::LogExpContext * /*ctx*/) override { }

  virtual void enterAsinExp(definitionParser::AsinExpContext * /*ctx*/) override { }
  virtual void exitAsinExp(definitionParser::AsinExpContext * /*ctx*/) override { }

  virtual void enterCotExp(definitionParser::CotExpContext * /*ctx*/) override { }
  virtual void exitCotExp(definitionParser::CotExpContext * /*ctx*/) override { }

  virtual void enterVariable(definitionParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(definitionParser::VariableContext * /*ctx*/) override { }

  virtual void enterSinhExp(definitionParser::SinhExpContext * /*ctx*/) override { }
  virtual void exitSinhExp(definitionParser::SinhExpContext * /*ctx*/) override { }

  virtual void enterNexpExp(definitionParser::NexpExpContext * /*ctx*/) override { }
  virtual void exitNexpExp(definitionParser::NexpExpContext * /*ctx*/) override { }

  virtual void enterExpAddSub(definitionParser::ExpAddSubContext * /*ctx*/) override { }
  virtual void exitExpAddSub(definitionParser::ExpAddSubContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

