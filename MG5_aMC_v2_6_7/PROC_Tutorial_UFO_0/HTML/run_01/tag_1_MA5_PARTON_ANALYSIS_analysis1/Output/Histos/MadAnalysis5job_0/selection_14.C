void selection_14()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo29","canvas_plotflow_tempo29",0,0,700,500);
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
  TH1F* S15_ETA_0 = new TH1F("S15_ETA_0","S15_ETA_0",40,-10.0,10.0);
  // Content
  S15_ETA_0->SetBinContent(0,0.0); // underflow
  S15_ETA_0->SetBinContent(1,0.0);
  S15_ETA_0->SetBinContent(2,0.0);
  S15_ETA_0->SetBinContent(3,0.0);
  S15_ETA_0->SetBinContent(4,0.0);
  S15_ETA_0->SetBinContent(5,0.0);
  S15_ETA_0->SetBinContent(6,0.29824130158);
  S15_ETA_0->SetBinContent(7,0.29824130158);
  S15_ETA_0->SetBinContent(8,0.0);
  S15_ETA_0->SetBinContent(9,0.29824130158);
  S15_ETA_0->SetBinContent(10,2.38593001264);
  S15_ETA_0->SetBinContent(11,4.4736190237);
  S15_ETA_0->SetBinContent(12,10.7366900569);
  S15_ETA_0->SetBinContent(13,19.9821701059);
  S15_ETA_0->SetBinContent(14,57.5605703049);
  S15_ETA_0->SetBinContent(15,105.279200558);
  S15_ETA_0->SetBinContent(16,179.839500953);
  S15_ETA_0->SetBinContent(17,260.662901381);
  S15_ETA_0->SetBinContent(18,304.504401613);
  S15_ETA_0->SetBinContent(19,287.504601523);
  S15_ETA_0->SetBinContent(20,277.662601471);
  S15_ETA_0->SetBinContent(21,264.838301403);
  S15_ETA_0->SetBinContent(22,290.487001539);
  S15_ETA_0->SetBinContent(23,303.90790161);
  S15_ETA_0->SetBinContent(24,255.592801354);
  S15_ETA_0->SetBinContent(25,174.172900923);
  S15_ETA_0->SetBinContent(26,91.8583204866);
  S15_ETA_0->SetBinContent(27,51.8939802749);
  S15_ETA_0->SetBinContent(28,23.8593001264);
  S15_ETA_0->SetBinContent(29,9.54372105056);
  S15_ETA_0->SetBinContent(30,3.28065401738);
  S15_ETA_0->SetBinContent(31,1.19296500632);
  S15_ETA_0->SetBinContent(32,0.29824130158);
  S15_ETA_0->SetBinContent(33,0.0);
  S15_ETA_0->SetBinContent(34,0.0);
  S15_ETA_0->SetBinContent(35,0.0);
  S15_ETA_0->SetBinContent(36,0.0);
  S15_ETA_0->SetBinContent(37,0.0);
  S15_ETA_0->SetBinContent(38,0.0);
  S15_ETA_0->SetBinContent(39,0.0);
  S15_ETA_0->SetBinContent(40,0.0);
  S15_ETA_0->SetBinContent(41,0.0); // overflow
  S15_ETA_0->SetEntries(10000);
  // Style
  S15_ETA_0->SetLineColor(9);
  S15_ETA_0->SetLineStyle(1);
  S15_ETA_0->SetLineWidth(1);
  S15_ETA_0->SetFillColor(9);
  S15_ETA_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_30","mystack");
  stack->Add(S15_ETA_0);
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
  stack->GetXaxis()->SetTitle("#eta [ uv~_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_14.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_14.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_14.eps");

}
