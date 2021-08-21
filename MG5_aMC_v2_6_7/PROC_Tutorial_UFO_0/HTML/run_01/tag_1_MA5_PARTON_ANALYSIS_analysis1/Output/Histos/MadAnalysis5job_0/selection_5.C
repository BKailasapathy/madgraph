void selection_5()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo11","canvas_plotflow_tempo11",0,0,700,500);
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
  TH1F* S6_PT_0 = new TH1F("S6_PT_0","S6_PT_0",40,0.0,500.0);
  // Content
  S6_PT_0->SetBinContent(0,0.0); // underflow
  S6_PT_0->SetBinContent(1,8.0525153915);
  S6_PT_0->SetBinContent(2,24.1575411745);
  S6_PT_0->SetBinContent(3,34.595991682);
  S6_PT_0->SetBinContent(4,46.525642262);
  S6_PT_0->SetBinContent(5,62.9289130595);
  S6_PT_0->SetBinContent(6,70.0867034075);
  S6_PT_0->SetBinContent(7,91.5600844515);
  S6_PT_0->SetBinContent(8,85.5952541615);
  S6_PT_0->SetBinContent(9,89.1741443355);
  S6_PT_0->SetBinContent(10,98.1213847705);
  S6_PT_0->SetBinContent(11,110.349305365);
  S6_PT_0->SetBinContent(12,118.103505742);
  S6_PT_0->SetBinContent(13,118.103505742);
  S6_PT_0->SetBinContent(14,107.36690522);
  S6_PT_0->SetBinContent(15,115.717605626);
  S6_PT_0->SetBinContent(16,105.875705148);
  S6_PT_0->SetBinContent(17,115.419405612);
  S6_PT_0->SetBinContent(18,108.559805278);
  S6_PT_0->SetBinContent(19,104.384505075);
  S6_PT_0->SetBinContent(20,101.998504959);
  S6_PT_0->SetBinContent(21,99.3143548285);
  S6_PT_0->SetBinContent(22,87.3847042485);
  S6_PT_0->SetBinContent(23,94.244254582);
  S6_PT_0->SetBinContent(24,79.6304238715);
  S6_PT_0->SetBinContent(25,77.8409837845);
  S6_PT_0->SetBinContent(26,66.806053248);
  S6_PT_0->SetBinContent(27,66.5078132335);
  S6_PT_0->SetBinContent(28,59.9465029145);
  S6_PT_0->SetBinContent(29,53.9816726245);
  S6_PT_0->SetBinContent(30,52.7887125665);
  S6_PT_0->SetBinContent(31,44.736192175);
  S6_PT_0->SetBinContent(32,45.0344321895);
  S6_PT_0->SetBinContent(33,34.2977516675);
  S6_PT_0->SetBinContent(34,33.1047816095);
  S6_PT_0->SetBinContent(35,32.210061566);
  S6_PT_0->SetBinContent(36,32.806541595);
  S6_PT_0->SetBinContent(37,25.3505112325);
  S6_PT_0->SetBinContent(38,28.9294014065);
  S6_PT_0->SetBinContent(39,22.666341102);
  S6_PT_0->SetBinContent(40,19.9821709715);
  S6_PT_0->SetBinContent(41,208.172410121); // overflow
  S6_PT_0->SetEntries(10000);
  // Style
  S6_PT_0->SetLineColor(9);
  S6_PT_0->SetLineStyle(1);
  S6_PT_0->SetLineWidth(1);
  S6_PT_0->SetFillColor(9);
  S6_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_12","mystack");
  stack->Add(S6_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ uv~_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_5.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_5.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_5.eps");

}
