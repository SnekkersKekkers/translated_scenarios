BGOpen("sc604",0);
ScrFadeIn(0);
VoicePlay("P513200002_33_000");
MsgDisp("Manager","Our brass band decided to play\"Force
Heart\"at this year's school festival.");
SEPlay("EV_SE_CLAP_004");
Wait(100,0);
MsgClose();
SEStop("EV_SE_CLAP_004",2);
VoicePlay("P513200002_32_000");
MsgDisp("VP Himuro","Ahem!");
SEPlay("EV_SE_544");
ChOpen(32,254,0,0,0,0,#1,0,0);
ChEye(32,0);
ChMouth(32,0);
VoicePlay("P513200002_32_010");
MsgDisp("VP Himuro","It's a great song choice. This song will
be felt differently by first-year,
second-year, and third-year students.");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("P513200002_32_020");
MsgDisp("VP Himuro","Make sure you put your heart and soul to
your performance.");
VoicePlay("P513200002_38_000");
MsgDisp("Members","Yes!");
MsgDisp("主人公","(My thoughts as third-year......)");
ChEye(32,0);
ChMouth(32,2);
VoicePlay("P513200002_32_030");
MsgDisp("VP Himuro","...... Hmm.
You look good.");
MsgDisp("主人公","Yes!
We are going to give our all in this final
school festival.");
ChEye(32,2);
ChMouth(32,2);
VoicePlay("P513200002_32_040");
MsgDisp("VP Himuro","Okay.");
ChEye(32,0);
ChMouth(32,1);
VoicePlay("P513200002_32_050");
MsgDisp("VP Himuro","Let your\"Force Heart\"burn completely!");
VoicePlay("P513200002_38_010");
MsgDisp("Members","Yes∈");
MsgDisp("主人公","Yes!
I'll do my best. ∈");
MsgClose();
ScrFadeOut(0);
ChClose(32,0,0);
