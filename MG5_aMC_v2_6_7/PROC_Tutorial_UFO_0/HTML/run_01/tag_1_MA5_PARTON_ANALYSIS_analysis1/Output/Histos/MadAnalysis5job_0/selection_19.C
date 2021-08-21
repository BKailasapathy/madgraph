void selection_19()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo39","canvas_plotflow_tempo39",0,0,700,500);
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
  TH1F* S20_DELTAR_0 = new TH1F("S20_DELTAR_0","S20_DELTAR_0",40,0.0,10.0);
  // Content
  S20_DELTAR_0->SetBinContent(0,0.0); // underflow
  S20_DELTAR_0->SetBinContent(1,0.0);
  S20_DELTAR_0->SetBinContent(2,0.0);
  S20_DELTAR_0->SetBinContent(3,1.49120601825);
  S20_DELTAR_0->SetBinContent(4,12.5261301533);
  S20_DELTAR_0->SetBinContent(5,41.1573005037);
  S20_DELTAR_0->SetBinContent(6,91.8583211242);
  S20_DELTAR_0->SetBinContent(7,151.208301851);
  S20_DELTAR_0->SetBinContent(8,242.470202967);
  S20_DELTAR_0->SetBinContent(9,329.25840403);
  S20_DELTAR_0->SetBinContent(10,379.362904643);
  S20_DELTAR_0->SetBinContent(11,430.958705274);
  S20_DELTAR_0->SetBinContent(12,488.519205979);
  S20_DELTAR_0->SetBinContent(13,415.748405088);
  S20_DELTAR_0->SetBinContent(14,168.804602066);
  S20_DELTAR_0->SetBinContent(15,95.1389711643);
  S20_DELTAR_0->SetBinContent(16,60.8412207446);
  S20_DELTAR_0->SetBinContent(17,26.2452303212);
  S20_DELTAR_0->SetBinContent(18,20.5786502519);
  S20_DELTAR_0->SetBinContent(19,10.4384501278);
  S20_DELTAR_0->SetBinContent(20,7.1577910876);
  S20_DELTAR_0->SetBinContent(21,2.08768902555);
  S20_DELTAR_0->SetBinContent(22,2.3859300292);
  S20_DELTAR_0->SetBinContent(23,1.1929650146);
  S20_DELTAR_0->SetBinContent(24,1.49120601825);
  S20_DELTAR_0->SetBinContent(25,0.29824130365);
  S20_DELTAR_0->SetBinContent(26,0.5964826073);
  S20_DELTAR_0->SetBinContent(27,0.5964826073);
  S20_DELTAR_0->SetBinContent(28,0.0);
  S20_DELTAR_0->SetBinContent(29,0.0);
  S20_DELTAR_0->SetBinContent(30,0.0);
  S20_DELTAR_0->SetBinContent(31,0.0);
  S20_DELTAR_0->SetBinContent(32,0.0);
  S20_DELTAR_0->SetBinContent(33,0.0);
  S20_DELTAR_0->SetBinContent(34,0.0);
  S20_DELTAR_0->SetBinContent(35,0.0);
  S20_DELTAR_0->SetBinContent(36,0.0);
  S20_DELTAR_0->SetBinContent(37,0.0);
  S20_DELTAR_0->SetBinContent(38,0.0);
  S20_DELTAR_0->SetBinContent(39,0.0);
  S20_DELTAR_0->SetBinContent(40,0.0);
  S20_DELTAR_0->SetBinContent(41,0.0); // overflow
  S20_DELTAR_0->SetEntries(10000);
  // Style
  S20_DELTAR_0->SetLineColor(9);
  S20_DELTAR_0->SetLineStyle(1);
  S20_DELTAR_0->SetLineWidth(1);
  S20_DELTAR_0->SetFillColor(9);
  S20_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_40","mystack");
  stack->Add(S20_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ c_{1}, p1_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_19.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_19.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_19.eps");

}
