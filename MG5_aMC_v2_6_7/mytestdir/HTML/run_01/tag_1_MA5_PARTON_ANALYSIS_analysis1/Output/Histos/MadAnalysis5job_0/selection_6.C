void selection_6()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo13","canvas_plotflow_tempo13",0,0,700,500);
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
  TH1F* S7_ETA_0 = new TH1F("S7_ETA_0","S7_ETA_0",40,-10.0,10.0);
  // Content
  S7_ETA_0->SetBinContent(0,0.0); // underflow
  S7_ETA_0->SetBinContent(1,0.0);
  S7_ETA_0->SetBinContent(2,0.0);
  S7_ETA_0->SetBinContent(3,0.0);
  S7_ETA_0->SetBinContent(4,0.0);
  S7_ETA_0->SetBinContent(5,0.0);
  S7_ETA_0->SetBinContent(6,0.0);
  S7_ETA_0->SetBinContent(7,160.3210066);
  S7_ETA_0->SetBinContent(8,160.3210066);
  S7_ETA_0->SetBinContent(9,480.9630198);
  S7_ETA_0->SetBinContent(10,641.2840264);
  S7_ETA_0->SetBinContent(11,2244.4940924);
  S7_ETA_0->SetBinContent(12,5931.8772442);
  S7_ETA_0->SetBinContent(13,17795.6307326);
  S7_ETA_0->SetBinContent(14,39759.6116368);
  S7_ETA_0->SetBinContent(15,70541.242904);
  S7_ETA_0->SetBinContent(16,111743.7046);
  S7_ETA_0->SetBinContent(17,132264.805445);
  S7_ETA_0->SetBinContent(18,141723.805834);
  S7_ETA_0->SetBinContent(19,141082.505808);
  S7_ETA_0->SetBinContent(20,131623.505419);
  S7_ETA_0->SetBinContent(21,134349.005531);
  S7_ETA_0->SetBinContent(22,148938.206131);
  S7_ETA_0->SetBinContent(23,148617.606118);
  S7_ETA_0->SetBinContent(24,137715.705669);
  S7_ETA_0->SetBinContent(25,103888.004277);
  S7_ETA_0->SetBinContent(26,67014.1827588);
  S7_ETA_0->SetBinContent(27,37996.0815642);
  S7_ETA_0->SetBinContent(28,18276.5907524);
  S7_ETA_0->SetBinContent(29,6733.4822772);
  S7_ETA_0->SetBinContent(30,1603.210066);
  S7_ETA_0->SetBinContent(31,1282.5680528);
  S7_ETA_0->SetBinContent(32,480.9630198);
  S7_ETA_0->SetBinContent(33,0.0);
  S7_ETA_0->SetBinContent(34,160.3210066);
  S7_ETA_0->SetBinContent(35,0.0);
  S7_ETA_0->SetBinContent(36,0.0);
  S7_ETA_0->SetBinContent(37,0.0);
  S7_ETA_0->SetBinContent(38,0.0);
  S7_ETA_0->SetBinContent(39,0.0);
  S7_ETA_0->SetBinContent(40,0.0);
  S7_ETA_0->SetBinContent(41,0.0); // overflow
  S7_ETA_0->SetEntries(10000);
  // Style
  S7_ETA_0->SetLineColor(9);
  S7_ETA_0->SetLineStyle(1);
  S7_ETA_0->SetLineWidth(1);
  S7_ETA_0->SetFillColor(9);
  S7_ETA_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_14","mystack");
  stack->Add(S7_ETA_0);
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
  stack->GetXaxis()->SetTitle("#eta [ t_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_6.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_6.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_6.eps");

}
