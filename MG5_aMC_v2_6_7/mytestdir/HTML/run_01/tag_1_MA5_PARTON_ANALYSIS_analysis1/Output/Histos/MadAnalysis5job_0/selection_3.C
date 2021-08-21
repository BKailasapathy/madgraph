void selection_3()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo7","canvas_plotflow_tempo7",0,0,700,500);
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
  TH1F* S4_PT_0 = new TH1F("S4_PT_0","S4_PT_0",40,0.0,500.0);
  // Content
  S4_PT_0->SetBinContent(0,0.0); // underflow
  S4_PT_0->SetBinContent(1,17795.6297891);
  S4_PT_0->SetBinContent(2,54188.4993578);
  S4_PT_0->SetBinContent(3,89779.758936);
  S4_PT_0->SetBinContent(4,110461.198691);
  S4_PT_0->SetBinContent(5,128577.398476);
  S4_PT_0->SetBinContent(6,136433.198383);
  S4_PT_0->SetBinContent(7,132585.498429);
  S4_PT_0->SetBinContent(8,133387.098419);
  S4_PT_0->SetBinContent(9,126974.198495);
  S4_PT_0->SetBinContent(10,109980.198697);
  S4_PT_0->SetBinContent(11,88336.8689531);
  S4_PT_0->SetBinContent(12,84008.1990044);
  S4_PT_0->SetBinContent(13,72946.0491355);
  S4_PT_0->SetBinContent(14,55310.7393445);
  S4_PT_0->SetBinContent(15,47294.6894395);
  S4_PT_0->SetBinContent(16,42645.3894946);
  S4_PT_0->SetBinContent(17,31422.9196276);
  S4_PT_0->SetBinContent(18,24689.4297074);
  S4_PT_0->SetBinContent(19,20681.4097549);
  S4_PT_0->SetBinContent(20,16833.6998005);
  S4_PT_0->SetBinContent(21,12825.679848);
  S4_PT_0->SetBinContent(22,13306.6398423);
  S4_PT_0->SetBinContent(23,9138.2968917);
  S4_PT_0->SetBinContent(24,8176.3709031);
  S4_PT_0->SetBinContent(25,6893.8029183);
  S4_PT_0->SetBinContent(26,5290.5929373);
  S4_PT_0->SetBinContent(27,4168.3459506);
  S4_PT_0->SetBinContent(28,3687.3829563);
  S4_PT_0->SetBinContent(29,2084.1729753);
  S4_PT_0->SetBinContent(30,2725.4569677);
  S4_PT_0->SetBinContent(31,801.6049905);
  S4_PT_0->SetBinContent(32,1763.5309791);
  S4_PT_0->SetBinContent(33,961.9259886);
  S4_PT_0->SetBinContent(34,1603.209981);
  S4_PT_0->SetBinContent(35,1282.5679848);
  S4_PT_0->SetBinContent(36,320.6419962);
  S4_PT_0->SetBinContent(37,641.2839924);
  S4_PT_0->SetBinContent(38,320.6419962);
  S4_PT_0->SetBinContent(39,480.9629943);
  S4_PT_0->SetBinContent(40,480.9629943);
  S4_PT_0->SetBinContent(41,1923.8519772); // overflow
  S4_PT_0->SetEntries(10000);
  // Style
  S4_PT_0->SetLineColor(9);
  S4_PT_0->SetLineStyle(1);
  S4_PT_0->SetLineWidth(1);
  S4_PT_0->SetFillColor(9);
  S4_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_8","mystack");
  stack->Add(S4_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ t~_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_3.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_3.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_3.eps");

}
