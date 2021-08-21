void selection_11()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo23","canvas_plotflow_tempo23",0,0,700,500);
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
  TH1F* S12_PT_0 = new TH1F("S12_PT_0","S12_PT_0",40,0.0,500.0);
  // Content
  S12_PT_0->SetBinContent(0,0.0); // underflow
  S12_PT_0->SetBinContent(1,6.561308198);
  S12_PT_0->SetBinContent(2,14.91206045);
  S12_PT_0->SetBinContent(3,25.052270756);
  S12_PT_0->SetBinContent(4,46.823881413);
  S12_PT_0->SetBinContent(5,59.946501809);
  S12_PT_0->SetBinContent(6,74.858562259);
  S12_PT_0->SetBinContent(7,92.753042799);
  S12_PT_0->SetBinContent(8,110.647503339);
  S12_PT_0->SetBinContent(9,136.594504122);
  S12_PT_0->SetBinContent(10,138.980404194);
  S12_PT_0->SetBinContent(11,143.15580432);
  S12_PT_0->SetBinContent(12,152.401304599);
  S12_PT_0->SetBinContent(13,164.629204968);
  S12_PT_0->SetBinContent(14,165.225704986);
  S12_PT_0->SetBinContent(15,162.243304896);
  S12_PT_0->SetBinContent(16,147.927704464);
  S12_PT_0->SetBinContent(17,137.787504158);
  S12_PT_0->SetBinContent(18,131.822603978);
  S12_PT_0->SetBinContent(19,123.173703717);
  S12_PT_0->SetBinContent(20,104.682703159);
  S12_PT_0->SetBinContent(21,89.770632709);
  S12_PT_0->SetBinContent(22,87.682942646);
  S12_PT_0->SetBinContent(23,75.156802268);
  S12_PT_0->SetBinContent(24,77.244492331);
  S12_PT_0->SetBinContent(25,63.525391917);
  S12_PT_0->SetBinContent(26,53.385191611);
  S12_PT_0->SetBinContent(27,40.859061233);
  S12_PT_0->SetBinContent(28,47.71861144);
  S12_PT_0->SetBinContent(29,36.385441098);
  S12_PT_0->SetBinContent(30,39.069611179);
  S12_PT_0->SetBinContent(31,28.929400873);
  S12_PT_0->SetBinContent(32,23.262820702);
  S12_PT_0->SetBinContent(33,20.87689063);
  S12_PT_0->SetBinContent(34,19.683920594);
  S12_PT_0->SetBinContent(35,15.210310459);
  S12_PT_0->SetBinContent(36,13.122620396);
  S12_PT_0->SetBinContent(37,13.122620396);
  S12_PT_0->SetBinContent(38,12.227890369);
  S12_PT_0->SetBinContent(39,12.526130378);
  S12_PT_0->SetBinContent(40,7.456032225);
  S12_PT_0->SetBinContent(41,65.016601962); // overflow
  S12_PT_0->SetEntries(10000);
  // Style
  S12_PT_0->SetLineColor(9);
  S12_PT_0->SetLineStyle(1);
  S12_PT_0->SetLineWidth(1);
  S12_PT_0->SetFillColor(9);
  S12_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_24","mystack");
  stack->Add(S12_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ p1_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_11.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_11.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_11.eps");

}
