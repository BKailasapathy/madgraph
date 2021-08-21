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
  S6_PT_0->SetBinContent(1,161.30128656);
  S6_PT_0->SetBinContent(2,599.11905008);
  S6_PT_0->SetBinContent(3,952.44572064);
  S6_PT_0->SetBinContent(4,1144.47090464);
  S6_PT_0->SetBinContent(5,1636.05586368);
  S6_PT_0->SetBinContent(6,2027.78783104);
  S6_PT_0->SetBinContent(7,2058.51182848);
  S6_PT_0->SetBinContent(8,2365.75180288);
  S6_PT_0->SetBinContent(9,2642.26877984);
  S6_PT_0->SetBinContent(10,2642.26877984);
  S6_PT_0->SetBinContent(11,3026.31974784);
  S6_PT_0->SetBinContent(12,2972.55275232);
  S6_PT_0->SetBinContent(13,3018.63874848);
  S6_PT_0->SetBinContent(14,3010.95774912);
  S6_PT_0->SetBinContent(15,3003.27674976);
  S6_PT_0->SetBinContent(16,2895.74175872);
  S6_PT_0->SetBinContent(17,2872.69876064);
  S6_PT_0->SetBinContent(18,2588.50178432);
  S6_PT_0->SetBinContent(19,2680.67377664);
  S6_PT_0->SetBinContent(20,2396.47680032);
  S6_PT_0->SetBinContent(21,2457.9247952);
  S6_PT_0->SetBinContent(22,2273.57981056);
  S6_PT_0->SetBinContent(23,2319.66580672);
  S6_PT_0->SetBinContent(24,1966.33983616);
  S6_PT_0->SetBinContent(25,1812.71884896);
  S6_PT_0->SetBinContent(26,1874.16784384);
  S6_PT_0->SetBinContent(27,1866.48684448);
  S6_PT_0->SetBinContent(28,1405.62588288);
  S6_PT_0->SetBinContent(29,1259.68589504);
  S6_PT_0->SetBinContent(30,1390.26388416);
  S6_PT_0->SetBinContent(31,1167.51390272);
  S6_PT_0->SetBinContent(32,1267.3668944);
  S6_PT_0->SetBinContent(33,1036.9369136);
  S6_PT_0->SetBinContent(34,975.48871872);
  S6_PT_0->SetBinContent(35,875.63562704);
  S6_PT_0->SetBinContent(36,652.8861456);
  S6_PT_0->SetBinContent(37,553.03295392);
  S6_PT_0->SetBinContent(38,660.56724496);
  S6_PT_0->SetBinContent(39,537.6709552);
  S6_PT_0->SetBinContent(40,614.4811488);
  S6_PT_0->SetBinContent(41,5146.2795712); // overflow
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
