#ifndef analysis_user_h
#define analysis_user_h

#include "SampleAnalyzer/Process/Analyzer/AnalyzerBase.h"
#include "SampleAnalyzer/Interfaces/root/RootMainHeaders.h"

namespace MA5
{
class user : public AnalyzerBase
{
  INIT_ANALYSIS(user,"MadAnalysis5job")

 public : 
  virtual bool Initialize(const MA5::Configuration& cfg,
                          const std::map<std::string,std::string>& parameters);
  virtual void Finalize(const SampleFormat& summary, const std::vector<SampleFormat>& files);
  virtual bool Execute(SampleFormat& sample, const EventFormat& event);

 private : 
  // Declaring particle containers
  std::vector<const MCParticleFormat*> _P_uv_I1I_PTorderinginterstate_REG_;
  std::vector<const MCParticleFormat*> _P_uv_I1I_PTorderingallstate_REG_;
  std::vector<const MCParticleFormat*> _P_uv_t_I1I_PTorderingallstate_REG_;
  std::vector<const MCParticleFormat*> _P_c_I1I_PTorderingfinalstate_REG_;
  std::vector<const MCParticleFormat*> _P_p1_I1I_PTorderingfinalstate_REG_;
  std::vector<const MCParticleFormat*> _P_uv_t_I1I_PTorderingfinalstate_REG_;
  std::vector<const MCParticleFormat*> _P_uvPTorderinginterstate_REG_;
  bool isP__uvPTorderinginterstate(const MCParticleFormat* part) const {
     if ( part==0 ) return false;
     if ( !PHYSICS->Id->IsInterState(part) ) return false;
     if ( (part->pdgid()!=9000007) ) return false;
     return true; }
  std::vector<const MCParticleFormat*> _P_uvPTorderingallstate_REG_;
  bool isP__uvPTorderingallstate(const MCParticleFormat* part) const {
     if ( part==0 ) return false;
     if ( (part->pdgid()!=9000007) ) return false;
     return true; }
  std::vector<const MCParticleFormat*> _P_uv_tPTorderingallstate_REG_;
  bool isP__uv_tPTorderingallstate(const MCParticleFormat* part) const {
     if ( part==0 ) return false;
     if ( (part->pdgid()!=-9000007) ) return false;
     return true; }
  std::vector<const MCParticleFormat*> _P_cPTorderingfinalstate_REG_;
  bool isP__cPTorderingfinalstate(const MCParticleFormat* part) const {
     if ( part==0 ) return false;
     if ( !PHYSICS->Id->IsFinalState(part) ) return false;
     if ( (part->pdgid()!=4) ) return false;
     return true; }
  std::vector<const MCParticleFormat*> _P_p1PTorderingfinalstate_REG_;
  bool isP__p1PTorderingfinalstate(const MCParticleFormat* part) const {
     if ( part==0 ) return false;
     if ( !PHYSICS->Id->IsFinalState(part) ) return false;
     if ( (part->pdgid()!=9000005) ) return false;
     return true; }
  std::vector<const MCParticleFormat*> _P_uv_tPTorderingfinalstate_REG_;
  bool isP__uv_tPTorderingfinalstate(const MCParticleFormat* part) const {
     if ( part==0 ) return false;
     if ( !PHYSICS->Id->IsFinalState(part) ) return false;
     if ( (part->pdgid()!=-9000007) ) return false;
     return true; }
};
}

#endif