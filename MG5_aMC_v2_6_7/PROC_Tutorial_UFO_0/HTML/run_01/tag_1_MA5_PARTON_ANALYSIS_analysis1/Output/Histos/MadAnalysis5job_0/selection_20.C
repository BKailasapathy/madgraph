void selection_20()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo41","canvas_plotflow_tempo41",0,0,700,500);
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
  TH1F* S21_DELTAR_0 = new TH1F("S21_DELTAR_0","S21_DELTAR_0",40,0.0,10.0);
  // Content
  S21_DELTAR_0->SetBinContent(0,0.0); // underflow
  S21_DELTAR_0->SetBinContent(1,7.456032201);
  S21_DELTAR_0->SetBinContent(2,20.8768905628);
  S21_DELTAR_0->SetBinContent(3,34.8942309407);
  S21_DELTAR_0->SetBinContent(4,52.7887114231);
  S21_DELTAR_0->SetBinContent(5,85.2970122994);
  S21_DELTAR_0->SetBinContent(6,96.928422613);
  S21_DELTAR_0->SetBinContent(7,123.471903329);
  S21_DELTAR_0->SetBinContent(8,168.208104535);
  S21_DELTAR_0->SetBinContent(9,208.172405612);
  S21_DELTAR_0->SetBinContent(10,262.750607083);
  S21_DELTAR_0->SetBinContent(11,334.925009029);
  S21_DELTAR_0->SetBinContent(12,447.36191206);
  S21_DELTAR_0->SetBinContent(13,454.818012261);
  S21_DELTAR_0->SetBinContent(14,247.242006665);
  S21_DELTAR_0->SetBinContent(15,148.822404012);
  S21_DELTAR_0->SetBinContent(16,92.7530425004);
  S21_DELTAR_0->SetBinContent(17,61.7359516643);
  S21_DELTAR_0->SetBinContent(18,49.2098113266);
  S21_DELTAR_0->SetBinContent(19,28.0346807558);
  S21_DELTAR_0->SetBinContent(20,17.8944804824);
  S21_DELTAR_0->SetBinContent(21,11.3331703055);
  S21_DELTAR_0->SetBinContent(22,7.456032201);
  S21_DELTAR_0->SetBinContent(23,7.75427320904);
  S21_DELTAR_0->SetBinContent(24,4.17537811256);
  S21_DELTAR_0->SetBinContent(25,2.9824130804);
  S21_DELTAR_0->SetBinContent(26,1.4912060402);
  S21_DELTAR_0->SetBinContent(27,0.89472392412);
  S21_DELTAR_0->SetBinContent(28,0.59648261608);
  S21_DELTAR_0->SetBinContent(29,0.59648261608);
  S21_DELTAR_0->SetBinContent(30,0.59648261608);
  S21_DELTAR_0->SetBinContent(31,0.0);
  S21_DELTAR_0->SetBinContent(32,0.59648261608);
  S21_DELTAR_0->SetBinContent(33,0.29824130804);
  S21_DELTAR_0->SetBinContent(34,0.0);
  S21_DELTAR_0->SetBinContent(35,0.0);
  S21_DELTAR_0->SetBinContent(36,0.0);
  S21_DELTAR_0->SetBinContent(37,0.0);
  S21_DELTAR_0->SetBinContent(38,0.0);
  S21_DELTAR_0->SetBinContent(39,0.0);
  S21_DELTAR_0->SetBinContent(40,0.0);
  S21_DELTAR_0->SetBinContent(41,0.0); // overflow
  S21_DELTAR_0->SetEntries(10000);
  // Style
  S21_DELTAR_0->SetLineColor(9);
  S21_DELTAR_0->SetLineStyle(1);
  S21_DELTAR_0->SetLineWidth(1);
  S21_DELTAR_0->SetFillColor(9);
  S21_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_42","mystack");
  stack->Add(S21_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ c_{1}, uv~_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_20.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_20.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_20.eps");

}
