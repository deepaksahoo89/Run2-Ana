// -*- C++ -*-
//
// Package:    Run2-Ana/BsToPhiMuMu
// Class:      BsToPhiMuMu
// 
/**\class BsToPhiMuMu BsToPhiMuMu.cc Run2-Ana/BsToPhiMuMu/plugins/BsToPhiMuMu.cc

 Description: [one line class summary]

 Implementation:
     [Notes on implementation]
*/
//--------------------------------------------------------
// Original Author:  Niladribihari Sahoo
//         Created:  Thu, 19 May 2016 10:43:34 GMT
// 
//  contact  nsahoo@cern.ch or  niladri.sahoo12@gmail.com
//--------------------------------------------------------
//


// system include files
#include <memory>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDAnalyzer.h"

#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include "FWCore/ParameterSet/interface/ParameterSet.h"
//
// class declaration
//

class BsToPhiMuMu : public edm::EDAnalyzer {
   public:
      explicit BsToPhiMuMu(const edm::ParameterSet&);
      ~BsToPhiMuMu();

      static void fillDescriptions(edm::ConfigurationDescriptions& descriptions);


   private:
      virtual void beginJob() override;
      virtual void analyze(const edm::Event&, const edm::EventSetup&) override;
      virtual void endJob() override;

      //virtual void beginRun(edm::Run const&, edm::EventSetup const&) override;
      //virtual void endRun(edm::Run const&, edm::EventSetup const&) override;
      //virtual void beginLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&) override;
      //virtual void endLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&) override;

      // ----------member data ---------------------------
};

//
// constants, enums and typedefs
//

//
// static data member definitions
//

//
// constructors and destructor
//
BsToPhiMuMu::BsToPhiMuMu(const edm::ParameterSet& iConfig)

{
   //now do what ever initialization is needed

}


BsToPhiMuMu::~BsToPhiMuMu()
{
 
   // do anything here that needs to be done at desctruction time
   // (e.g. close files, deallocate resources etc.)

}


//
// member functions
//

// ------------ method called for each event  ------------
void
BsToPhiMuMu::analyze(const edm::Event& iEvent, const edm::EventSetup& iSetup)
{
   using namespace edm;



#ifdef THIS_IS_AN_EVENT_EXAMPLE
   Handle<ExampleData> pIn;
   iEvent.getByLabel("example",pIn);
#endif
   
#ifdef THIS_IS_AN_EVENTSETUP_EXAMPLE
   ESHandle<SetupData> pSetup;
   iSetup.get<SetupRecord>().get(pSetup);
#endif
}


// ------------ method called once each job just before starting event loop  ------------
void 
BsToPhiMuMu::beginJob()
{
}

// ------------ method called once each job just after ending the event loop  ------------
void 
BsToPhiMuMu::endJob() 
{
}

// ------------ method called when starting to processes a run  ------------
/*
void 
BsToPhiMuMu::beginRun(edm::Run const&, edm::EventSetup const&)
{
}
*/

// ------------ method called when ending the processing of a run  ------------
/*
void 
BsToPhiMuMu::endRun(edm::Run const&, edm::EventSetup const&)
{
}
*/

// ------------ method called when starting to processes a luminosity block  ------------
/*
void 
BsToPhiMuMu::beginLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&)
{
}
*/

// ------------ method called when ending the processing of a luminosity block  ------------
/*
void 
BsToPhiMuMu::endLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&)
{
}
*/

// ------------ method fills 'descriptions' with the allowed parameters for the module  ------------
void
BsToPhiMuMu::fillDescriptions(edm::ConfigurationDescriptions& descriptions) {
  //The following says we do not know what parameters are allowed so do no validation
  // Please change this to state exactly what you do use, even if it is no parameters
  edm::ParameterSetDescription desc;
  desc.setUnknown();
  descriptions.addDefault(desc);
}

//define this as a plug-in
DEFINE_FWK_MODULE(BsToPhiMuMu);
