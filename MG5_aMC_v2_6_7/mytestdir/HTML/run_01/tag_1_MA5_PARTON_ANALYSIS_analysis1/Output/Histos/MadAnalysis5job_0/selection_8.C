void selection_8()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo17","canvas_plotflow_tempo17",0,0,700,500);
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
  TH1F* S9_DELTAR_0 = new TH1F("S9_DELTAR_0","S9_DELTAR_0",40,0.0,10.0);
  // Content
  S9_DELTAR_0->SetBinContent(0,0.0); // underflow
  S9_DELTAR_0->SetBinContent(1,0.0);
  S9_DELTAR_0->SetBinContent(2,0.0);
  S9_DELTAR_0->SetBinContent(3,0.0);
  S9_DELTAR_0->SetBinContent(4,0.0);
  S9_DELTAR_0->SetBinContent(5,0.0);
  S9_DELTAR_0->SetBinContent(6,0.0);
  S9_DELTAR_0->SetBinContent(7,0.0);
  S9_DELTAR_0->SetBinContent(8,0.0);
  S9_DELTAR_0->SetBinContent(9,0.0);
  S9_DELTAR_0->SetBinContent(10,0.0);
  S9_DELTAR_0->SetBinContent(11,0.0);
  S9_DELTAR_0->SetBinContent(12,0.0);
  S9_DELTAR_0->SetBinContent(13,625732.850822);
  S9_DELTAR_0->SetBinContent(14,408177.26792);
  S9_DELTAR_0->SetBinContent(15,188537.485182);
  S9_DELTAR_0->SetBinContent(16,114950.190966);
  S9_DELTAR_0->SetBinContent(17,77755.673889);
  S9_DELTAR_0->SetBinContent(18,48256.6162074);
  S9_DELTAR_0->SetBinContent(19,29819.7076564);
  S9_DELTAR_0->SetBinContent(20,26773.6078958);
  S9_DELTAR_0->SetBinContent(21,22284.6182486);
  S9_DELTAR_0->SetBinContent(22,17314.6686392);
  S9_DELTAR_0->SetBinContent(23,10581.1891684);
  S9_DELTAR_0->SetBinContent(24,8016.04937);
  S9_DELTAR_0->SetBinContent(25,5771.5555464);
  S9_DELTAR_0->SetBinContent(26,4649.3086346);
  S9_DELTAR_0->SetBinContent(27,3527.0617228);
  S9_DELTAR_0->SetBinContent(28,2885.7777732);
  S9_DELTAR_0->SetBinContent(29,2244.4938236);
  S9_DELTAR_0->SetBinContent(30,1603.209874);
  S9_DELTAR_0->SetBinContent(31,160.3209874);
  S9_DELTAR_0->SetBinContent(32,1122.2469118);
  S9_DELTAR_0->SetBinContent(33,480.9629622);
  S9_DELTAR_0->SetBinContent(34,320.6419748);
  S9_DELTAR_0->SetBinContent(35,1122.2469118);
  S9_DELTAR_0->SetBinContent(36,320.6419748);
  S9_DELTAR_0->SetBinContent(37,320.6419748);
  S9_DELTAR_0->SetBinContent(38,0.0);
  S9_DELTAR_0->SetBinContent(39,160.3209874);
  S9_DELTAR_0->SetBinContent(40,0.0);
  S9_DELTAR_0->SetBinContent(41,320.6419748); // overflow
  S9_DELTAR_0->SetEntries(10000);
  // Style
  S9_DELTAR_0->SetLineColor(9);
  S9_DELTAR_0->SetLineStyle(1);
  S9_DELTAR_0->SetLineWidth(1);
  S9_DELTAR_0->SetFillColor(9);
  S9_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_18","mystack");
  stack->Add(S9_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ t~_{1}, t_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_8.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_8.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_8.eps");

}
