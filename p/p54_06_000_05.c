BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I failed... even though that was the last
performance of my high school life...)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(6,254,0,0,0,#1,#1,0,0);
VoiceEVSPlay(6);
VoicePlay("P540600005_06_000");
MsgDisp("Himuro","｛主人公｝.");
MsgDisp("主人公","｛氷室＊＊｝...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("P540600005_06_010");
MsgDisp("Himuro","Could you not make that face?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
VoicePlay("P540600005_06_020");
MsgDisp("Himuro","Just like how there's times it'll go well,
there are also times you'll fail.");
MsgDisp("主人公","But it was my last cultural festival...");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("P540600005_06_030");
MsgDisp("Himuro","That was... unlucky.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("P540600005_06_040");
MsgDisp("Himuro","And in a way, I can't forget it.
It's a memory, right?");
MsgDisp("主人公","...Yeah.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("P540600005_06_050");
MsgDisp("Himuro","It doesn't change the fact that you gave
it your all for three years, so why not
hold your head high?");
MsgDisp("主人公","...Thank you.");
MsgDisp("主人公","(I might have failed in the end, But I
made so many memories these last three
years in the wind music club.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
