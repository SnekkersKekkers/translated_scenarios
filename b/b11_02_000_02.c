BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Seems like ｛颯砂＊＊｝ still
isn't here...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","(｛颯砂＊＊｝ you're late... did something
happen?)");
SEPlay("EV_SE_524");
SEWait();
MsgClose();
SEPlay("EV_SE_544");
ChOpen(35,254,0,0,0,#1,#1,0,0);
VoicePlay("B110200002_35_000");
MsgDisp("Guy","Oh, it's been a while since I've felt such
a spark! How about we go to that café
over there and talk?");
MsgDisp("主人公","W-What∋
I have nothing to talk about.");
ChEye(35,1);
ChMouth(35,0);
VoicePlay("B110200002_35_010");
MsgDisp("Guy","Ah, you don't?
I do.
Alright let's go.");
VoicePlay("B110200002_02_000");
MsgDisp("Sassa?","What business do you have with her?");
ChEye(35,2);
ChMouth(35,2);
VoicePlay("B110200002_35_020");
MsgDisp("Guy","Huu～, nice body.");
ChPosition(35,2);
MsgDispSksp(1,5);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
Wait(25,0);
MsgClose();
BGMPlay("BGM_C02_SASSA_A",0.01);
ChOpen(2,253,4,0,0,#1,#1,0,1,0,30);
VoicePlay("B110200002_02_010");
MsgDisp("Sassa","Sorry I'm late.
Are you alright?");
MsgDispSksp(0);
MsgDisp("主人公","Y-Yeah.");
ChEye(35,1);
ChMouth(35,0);
VoicePlay("B110200002_35_030");
MsgDisp("Guy","Yeah, nice!
There's a demand for this kind of muscular
beauty nowadays?");
MsgDispSksp(1,5);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2);
ChEyeOpenLevel(2,7);
VoicePlay("B110200002_02_020");
MsgDisp("Sassa","What's with that!
S-Stop looking at me weirdly.");
MsgDispSksp(0);
ChEye(35,0);
ChMouth(35,0);
VoicePlay("B110200002_35_040");
MsgDisp("Guy","Shall we conquer the world together?");
MsgDispSksp(1,5);
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("B110200002_02_030");
MsgDisp("Sassa","Y-You're talking to me∋");
MsgDispSksp(0);
ChEye(35,1);
ChMouth(35,0);
VoicePlay("B110200002_35_050");
MsgDisp("Guy","That girl? She'd probably sell well
anywhere, but as for you, Mr. Muscle, I'll
take you under my wing. Take your time and
think it over.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(35);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ChPosition(2,0);
MsgDisp("主人公","｛颯砂＊＊｝, are you alright?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("B110200002_02_040");
MsgDisp("Sassa","Yeah... wait, why am I the one getting
worried over?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("B110200002_02_050");
MsgDisp("Sassa","Sorry, things got weird because I was
late.
Come on, let's go now.");
