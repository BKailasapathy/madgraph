void selection_21()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo43","canvas_plotflow_tempo43",0,0,700,500);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);
  canvas->SetHighLightColor(2);
  canvas->SetFillColor(0);
  canvas->SetBorderMode(0);
  canvas->SetBorderSize(3);
  canvas->SetFrameBorderMode(0);
  canvas->SetFrameBorderSize(0);
  canvas->SetTickx(1);
  canvas->SetTicky(1);
  canvas->SetLeftMargin(0.14);
  canvas->SetRightMargin(0.05);
  canvas->SetBottomMargin(0.15);
  canvas->SetTopMargin(0.05);

  // Creating a new TH1F
  TH1F* S22_DELTAR_0 = new TH1F("S22_DELTAR_0","S22_DELTAR_0",40,0.0,10.0);
  // Content
  S22_DELTAR_0->SetBinContent(0,0.0); // underflow
  S22_DELTAR_0->SetBinContent(1,4.17537821448);
  S22_DELTAR_0->SetBinContent(2,19.6839210111);
  S22_DELTAR_0->SetBinContent(3,40.5608220835);
  S22_DELTAR_0->SetBinContent(4,53.086952727);
  S22_DELTAR_0->SetBinContent(5,75.1568038606);
  S22_DELTAR_0->SetBinContent(6,93.0512847798);
  S22_DELTAR_0->SetBinContent(7,122.577206297);
  S22_DELTAR_0->SetBinContent(8,147.629407583);
  S22_DELTAR_0->SetBinContent(9,207.575910663);
  S22_DELTAR_0->SetBinContent(10,269.013613819);
  S22_DELTAR_0->SetBinContent(11,350.731818016);
  S22_DELTAR_0->SetBinContent(12,433.941122291);
  S22_DELTAR_0->SetBinContent(13,450.046123118);
  S22_DELTAR_0->SetBinContent(14,252.013912945);
  S22_DELTAR_0->SetBinContent(15,163.13800838);
  S22_DELTAR_0->SetBinContent(16,103.489705316);
  S22_DELTAR_0->SetBinContent(17,66.5078134164);
  S22_DELTAR_0->SetBinContent(18,47.4203624359);
  S22_DELTAR_0->SetBinContent(19,26.2452313482);
  S22_DELTAR_0->SetBinContent(20,18.4909609498);
  S22_DELTAR_0->SetBinContent(21,12.5261306434);
  S22_DELTAR_0->SetBinContent(22,9.24548047492);
  S22_DELTAR_0->SetBinContent(23,5.07010226044);
  S22_DELTAR_0->SetBinContent(24,4.4736192298);
  S22_DELTAR_0->SetBinContent(25,2.38593012256);
  S22_DELTAR_0->SetBinContent(26,1.19296506128);
  S22_DELTAR_0->SetBinContent(27,1.19296506128);
  S22_DELTAR_0->SetBinContent(28,0.89472394596);
  S22_DELTAR_0->SetBinContent(29,0.0);
  S22_DELTAR_0->SetBinContent(30,0.29824131532);
  S22_DELTAR_0->SetBinContent(31,0.0);
  S22_DELTAR_0->SetBinContent(32,0.0);
  S22_DELTAR_0->SetBinContent(33,0.0);
  S22_DELTAR_0->SetBinContent(34,0.0);
  S22_DELTAR_0->SetBinContent(35,0.0);
  S22_DELTAR_0->SetBinContent(36,0.29824131532);
  S22_DELTAR_0->SetBinContent(37,0.29824131532);
  S22_DELTAR_0->SetBinContent(38,0.0);
  S22_DELTAR_0->SetBinContent(39,0.0);
  S22_DELTAR_0->SetBinContent(40,0.0);
  S22_DELTAR_0->SetBinContent(41,0.0); // overflow
  S22_DELTAR_0->SetEntries(10000);
  // Style
  S22_DELTAR_0->SetLineColor(9);
  S22_DELTAR_0->SetLineStyle(1);
  S22_DELTAR_0->SetLineWidth(1);
  S22_DELTAR_0->SetFillColor(9);
  S22_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_44","mystack");
  stack->Add(S22_DELTAR_0);
  stack->Draw("");

  // Y axis
  stack->GetYaxis()->SetLabelSize(0.04);
  stack->GetYaxis()->SetLabelOffset(0.005);
  stack->GetYaxis()->SetTitleSize(0.06);
  stack->GetYaxis()->SetTitleFont(22);
  stack->GetYaxis()->SetTitleOffset(1);
  stack->GetYaxis()->SetTitle("Events  ( L_{int} = 10 fb^{-1} )");

  // X axis
  stack->GetXaxis()->SetLabelSize(0.04);
  stack->GetXaxis()->SetLabelOffset(0.005);
  stack->GetXaxis()->SetTitleSize(0.06);
  stack->GetXaxis()->SetTitleFont(22);
  stack->GetXaxis()->SetTitleOffset(1);
  stack->GetXaxis()->SetTitle("#DeltaR [ p1_{1}, uv~_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_21.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_21.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_21.eps");

}
