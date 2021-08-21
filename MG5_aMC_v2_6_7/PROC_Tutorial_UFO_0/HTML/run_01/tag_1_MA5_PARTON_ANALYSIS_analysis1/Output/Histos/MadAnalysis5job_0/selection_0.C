void selection_0()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo1","canvas_plotflow_tempo1",0,0,700,500);
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
  TH1F* S1_THT_0 = new TH1F("S1_THT_0","S1_THT_0",40,0.0,500.0);
  // Content
  S1_THT_0->SetBinContent(0,0.0); // underflow
  S1_THT_0->SetBinContent(1,5.0701024403);
  S1_THT_0->SetBinContent(2,17.2979915022);
  S1_THT_0->SetBinContent(3,29.2276525382);
  S1_THT_0->SetBinContent(4,37.2801632375);
  S1_THT_0->SetBinContent(5,53.9816746879);
  S1_THT_0->SetBinContent(6,80.8233970189);
  S1_THT_0->SetBinContent(7,97.2266684434);
  S1_THT_0->SetBinContent(8,110.349309583);
  S1_THT_0->SetBinContent(9,138.980412069);
  S1_THT_0->SetBinContent(10,138.980412069);
  S1_THT_0->SetBinContent(11,146.436512717);
  S1_THT_0->SetBinContent(12,161.945014064);
  S1_THT_0->SetBinContent(13,161.050313986);
  S1_THT_0->SetBinContent(14,164.032714245);
  S1_THT_0->SetBinContent(15,167.015114504);
  S1_THT_0->SetBinContent(16,147.62941282);
  S1_THT_0->SetBinContent(17,133.910311629);
  S1_THT_0->SetBinContent(18,123.471910723);
  S1_THT_0->SetBinContent(19,116.910610153);
  S1_THT_0->SetBinContent(20,103.191508961);
  S1_THT_0->SetBinContent(21,100.507308728);
  S1_THT_0->SetBinContent(22,100.507308728);
  S1_THT_0->SetBinContent(23,76.9462566822);
  S1_THT_0->SetBinContent(24,66.5078157757);
  S1_THT_0->SetBinContent(25,60.8412252836);
  S1_THT_0->SetBinContent(26,55.7711248433);
  S1_THT_0->SetBinContent(27,44.4379538591);
  S1_THT_0->SetBinContent(28,42.0520236519);
  S1_THT_0->SetBinContent(29,36.9819232116);
  S1_THT_0->SetBinContent(30,34.2977529785);
  S1_THT_0->SetBinContent(31,26.5434723051);
  S1_THT_0->SetBinContent(32,24.4557921238);
  S1_THT_0->SetBinContent(33,23.2628220202);
  S1_THT_0->SetBinContent(34,14.912061295);
  S1_THT_0->SetBinContent(35,15.5085513468);
  S1_THT_0->SetBinContent(36,13.1226211396);
  S1_THT_0->SetBinContent(37,15.5085513468);
  S1_THT_0->SetBinContent(38,8.947239777);
  S1_THT_0->SetBinContent(39,10.4384509065);
  S1_THT_0->SetBinContent(40,11.3331709842);
  S1_THT_0->SetBinContent(41,64.7183656203); // overflow
  S1_THT_0->SetEntries(10000);
  // Style
  S1_THT_0->SetLineColor(9);
  S1_THT_0->SetLineStyle(1);
  S1_THT_0->SetLineWidth(1);
  S1_THT_0->SetFillColor(9);
  S1_THT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_2","mystack");
  stack->Add(S1_THT_0);
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
  stack->GetXaxis()->SetTitle("H_{T} (GeV) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_0.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_0.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_0.eps");

}
