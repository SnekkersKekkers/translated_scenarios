BGOpen("sc601",0);
ScrFadeIn(0);
MsgDisp("主人公","(｛颯砂＊＊｝...Your hurdle time is your
personal best. Maybe you'll be able to win
all the events.)");
MsgClose();
SEPlay("EV_SE_628");
SEWait();
BGMPlay("BGM_C02_SASSA_A");
ChOpen(2,41,3,0,4,#1,#1,0,0);
VoiceEVSPlay(2);
VoicePlay("G110200602_02_000");
MsgDisp("Sassa","｛主人公｝, I just jumped all the
hurdles using image training.");
MsgDisp("主人公","Yeah, it's a better time than the last
track meet.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,1);
VoicePlay("G110200602_02_010");
MsgDisp("Sassa","So that I don't forget this feeling, I'm
going once more.");
MsgClose();
ScrFadeOut(0);
ChClose(2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev002",0);
BGMVol(0.5,2);
ChOpen(2,100,0,0,0,#1,#1,0,0);
SEPlay("EV_SE_FOOT_037");
ScrFadeIn(0);
VoiceEVSPlay(2);
VoicePlay("G110200602_02_020");
MsgDisp("Sassa","｛主人公｝, thanks to you, I've
been able to practice to my fullest these
days.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200602_02_030");
MsgDisp("Sassa","This is my last Inter-High.
Maybe I can give my seniors some good
news.");
MsgDisp("主人公","That's right. If ｛颯砂＊＊｝ can
give it his all until the end, I'm sure
they'll be very happy.");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200602_02_040");
MsgDisp("Sassa","I'm only doing this for myself, but
everyone is cheering me on.
I couldn't be happier.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200602_02_050");
MsgDisp("Sassa","That's why I'm going to keep going until I
drop.");
MsgDisp("主人公","I'm rooting for you.
But, please don't actually collapse, okay?");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200602_02_060");
MsgDisp("Sassa","If I just think about how you're waiting
for me at the finish line, I'll find my way there.");
MsgDisp("主人公","Eh?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200602_02_070");
MsgDisp("Sassa","So, from now on, keep watching me!");
BGMStop();
SEStop("EV_SE_FOOT_037",2);
MsgClose();
ScrFadeOut(0,0);
MsgDisp("主人公","(｛颯砂＊＊｝...
There isn't long until the last
Inter-High!)");
MsgClose();
ChClose(2,0,0);
