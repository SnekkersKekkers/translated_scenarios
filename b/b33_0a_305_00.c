MsgClose();
ChClose(1,0,0);
ChClose(2,0,0);
BGOpen("ne320",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChPosition(6,0);
ScrFadeIn(0);
SEPlay("EV_SE_086");
Wait(15,1);
SEPlay("EV_SE_869");
SEPlay("EV_SE_061",0.5);
SEWait();
VoicePlay("B330A30500_01_000");
MsgDisp("Kazama","Alright!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330A30500_06_000");
MsgDisp("Himuro","...As expected.");
VoicePlay("B330A30500_02_000");
MsgDisp("Sassa","Not bad, Ryota.");
MsgDisp("主人公","Amazing!
Both ｛風真＊＊｝ and ｛颯砂＊＊｝ got all
three darts on bullseye.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("B330A30500_06_010");
MsgDisp("Himuro","Yes.
Then, next it's my turn.");
MsgDisp("主人公","Do your best too, ｛氷室＊＊｝.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(6,0,30);
SEWait();
VoicePlay("B330A30500_06_020");
MsgDisp("Himuro","\"Too\", huh.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
ChOpen(1,255,0,0,3,#1,#1,0,1,0,30);
ChOpen(2,255,3,0,4,#1,#1,0,2,0,30);
SEWait();
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B330A30500_01_010");
MsgDisp("Kazama","Inori!
Aim for a triple 20!");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("B330A30500_02_010");
MsgDisp("Sassa","That's right.
You won't be able to catch up to us with a
bullseye you know?");
MsgDisp("主人公","The bullseye is in the center right...?
Is there a higher score than that?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("B330A30500_01_020");
MsgDisp("Kazama","Yeah, you'll get 60 points with a triple
20.");
MsgDisp("主人公","So that's how it is!
Do your best, ｛氷室＊＊｝!");
VoicePlay("B330A30500_06_030");
MsgDisp("Himuro","Yo!");
SEPlay("EV_SE_086");
Wait(15,1);
SEPlay("EV_SE_869");
SEPlay("EV_SE_062");
SEWait();
ChMouth(1,2);
MsgDisp("主人公","Amazing...!");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,5);
VoicePlay("B330A30500_02_020");
MsgDisp("Sassa","Ohh, good job!");
VoicePlay("B330A30500_06_040");
MsgDisp("Himuro","That!");
SEPlay("EV_SE_086");
Wait(15,1);
SEPlay("EV_SE_869");
SEPlay("EV_SE_062");
SEWait();
ChEye(1,3);
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("B330A30500_01_030");
MsgDisp("Kazama","Seriously...!");
MsgDisp("主人公","Good luck for the last one∈");
MsgClose();
ScrFadeOut(0);
VoicePlay("B330A30500_06_050");
MsgDisp("Himuro","Go!");
SEPlay("EV_SE_086");
Wait(15,1);
SEPlay("EV_SE_869");
SEPlay("EV_SE_062");
Wait(50,1);
SEPlay("EV_SE_741",0.5,0.7);
SEPlay("EV_SE_752",0,0.6);
Wait(50,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
SEStop("EV_SE_741",2);
MsgClose();
ChClose(1,0,0);
ChClose(2,0,0);
MsgClose();
ChOpen(6,255,0,0,0,#1,#1,0,3,0,30);
ChOpen(1,255,0,0,3,#1,#1,0,3,0,30);
ChOpen(2,255,4,0,0,#1,#1,0,3,0,30);
ChLayout(2);
ScrFadeIn(0);
VoicePlay("B330A30500_02_030");
MsgDisp("Sassa","You really put your mind to it huh?
That's amazing, Inori.");
ChEye(1,2);
VoicePlay("B330A30500_01_040");
MsgDisp("Kazama","Yeah, I've been beaten this time.");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,1);
VoicePlay("B330A30500_06_060");
MsgDisp("Himuro","It was thanks to the pressure from my
seniors amd you cheering me on.");
MsgDisp("主人公","Hehe, that was super cool.");
ChEye(1,0);
ChMouth(1,2);
ChEyeOpenLevel(1,8);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChCheek(6,5);
VoicePlay("B330A30500_06_070");
MsgDisp("Himuro","......");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B330A30500_01_050");
MsgDisp("Kazama","...Let's have a rematch then.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,1);
VoicePlay("B330A30500_02_040");
MsgDisp("Sassa","Yeah, I'll get serious next time.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,4);
ChCheek(6,0);
VoicePlay("B330A30500_06_080");
MsgDisp("Himuro","I accept your challenge.");
MsgDisp("主人公","(Hmm...?
This is turning into a war, isn't it?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,7);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,7);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,7);
ChEyeOpenLevel(6,#1);
ChMouthOpenLevel(6,#1);
ChCheek(6,0);
