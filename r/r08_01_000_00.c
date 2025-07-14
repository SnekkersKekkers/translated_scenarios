BGOpen("sc771",2);
ChLayout(1);
MsgClose();
ChOpen(1,34,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("R080100000_01_000");
VoiceEVSPlay(1);
MsgDisp("Kazama","Okay, enjoy the Christmas party until the
end, ｛主人公｝.");
MsgDisp("主人公","Huh, what about you, ｛風真＊＊｝?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("R080100000_01_010");
MsgDisp("Kazama","I have to go watch the store for my
Grandpa.
The end of year is rough.");
MsgDisp("主人公","I see...");
ChEye(1,0);
ChMouth(1,2);
VoicePlay("R080100000_22_000");
MsgDisp("Hikaru?","Ah, Mari!");
ChClose(1,0,30);
ChLayout(2);
MsgClose();
ChOpen(1,34,0,4,0,0,#1,0,0,0,30);
MsgClose();
SEPlay("EV_SE_544",0,0.3);
ChOpen(21,34,0,0,0,#1,#1,0,1);
SEPlay("EV_SE_544",0.1,0.5);
ChOpen(22,34,0,0,3,#1,#1,0,2);
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("R080100000_21_000");
MsgDisp("Michiru","Hehe, have two worlds collided?");
ChEye(22,0);
ChMouth(22,2);
ChMotion(22,4,1);
ChEyeOpenLevel(22,7);
VoicePlay("R080100000_22_010");
MsgDisp("Hikaru","Kazama-kun, I thought I told you that you
can't reserve Mari!");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("R080100000_01_020");
MsgDisp("Kazama","This is the first time you showed up at
the right moment.");
ChEye(22,0);
ChMouth(22,1);
ChMotion(22,0,1);
ChEyeOpenLevel(22,7);
VoicePlay("R080100000_22_020");
MsgDisp("Hikaru","What do you mean～?");
ChMouth(21,4);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("R080100000_01_030");
MsgDisp("Kazama","I have to go, so I'll leave her to you.
See ya.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgClose();
ChClose(21,0,30);
ChClose(22,0,30);
ChLayout(1);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO",0,0.5);
ChOpen(21,34,0,0,0,#1,#1,0,1,0,30);
ChOpen(22,34,0,0,2,#1,#1,0,2,0,30);
ChEye(22,0);
ChMouth(22,2);
VoicePlay("R080100000_22_030");
MsgDisp("Hikaru","Honestly. Is he supposed to be Mari's
guardian?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,3);
VoicePlay("R080100000_21_010");
MsgDisp("Michiru","What's wrong?
With Kazama-kun, I mean.");
MsgDisp("主人公","He said he has to work.
Help out his grandfather's store.");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("R080100000_21_020");
MsgDisp("Michiru","I see...
Kazama-kun must have it rough, huh.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("R080100000_22_040");
MsgDisp("Hikaru","Come on, come on, since I'm now Mari's
guardian, let's enjoy the party♪
Let's go to the balcony!");
MsgDisp("主人公","Hehe, okay.");
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(22,0,0);
ChClose(21,0,0);
Wait(40,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc770",2);
ScrFadeIn(0);
MsgDisp("主人公","(So much for the last High School party.
Yeah, I guess I had fun...)");
MsgDisp("主人公","(｛風真＊＊｝, are you working hard all by
yourself these days...?)");
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_DOOR_018");
SEWait();
VoicePlay("R080100000_01_040");
MsgDisp("Kazama?","Welcome.");
MsgClose();
BGOpen("bh130",0);
ScrFadeIn(0);
MsgDisp("主人公","｛風真＊＊｝...?");
VoicePlay("R080100000_01_050");
MsgDisp("Kazama","Y-You...");
MsgClose();
ScrFadeOut(0,0);
BGMPlay("BGM_XMAS_TRHEE",0.01);
StlOpen("ev_01_19");
StlEye(1,0);
StlMouth(1,2);
StlCheek(1,3);
ScrFadeIn(0);
VoicePlay("R080100000_01_060");
MsgDisp("Kazama","...Welcome.
Can I help you?");
MsgDisp("主人公","Hehe, yes you can. ｛風真＊＊｝, thank you
for the lovely glove box. I didn't thank
you earlier.");
StlEyeOpenLevel(1,5,1);
StlMouth(1,0);
VoicePlay("R080100000_01_070");
MsgDisp("Kazama","I see.
It's a nice antique.
Just keep important things in it.");
StlEye(1,1);
StlMouth(1,1);
StlCheek(1,7);
VoicePlay("R080100000_01_080");
MsgDisp("Kazama","And I...
should also thank you.
My dream came true because of you.");
MsgDisp("主人公","Huh?");
StlEye(1,2);
StlMouth(1,2);
StlCheek(1,7);
VoicePlay("R080100000_01_090");
MsgDisp("Kazama","An antique shop just for us two.");
MsgDisp("主人公","So pretty...");
StlEye(1,3);
StlMouth(1,2);
VoicePlay("R080100000_01_100");
MsgDisp("Kazama","Yeah. It's open for a little longer
today.");
StlEye(1,2);
MsgClose();
ScrFadeOut(0,0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMVol(0.5,2);
SEPlay("EV_SE_551",0.3,0.6);
SEWait();
BGOpen("bh130",0);
ChLayout(1);
ChOpen(1,34,0,0,3,10,#1,0,0);
ScrFadeIn(0);
ChEye(1,4);
ChEyeOpenLevel(1,0);
VoicePlay("R080100000_01_110");
MsgDisp("Kazama","Alright, I have to close the store now.");
MsgDisp("主人公","Okay.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("R080100000_01_120");
MsgDisp("Kazama","Sorry to keep you up late.
I'll walk you home.");
MsgClose();
SEPlay("EV_SE_FOOT_039");
ChClose(1,0,30);
ChLayout(0);
MsgClose();
ChOpen(1,34,0,4,3,#1,#1,0,0,0,30);
SEWait();
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("R080100000_01_130");
MsgDisp("Kazama","Don't you think you are too dressed up to
be an antique owner's wife, today?");
MsgDisp("主人公","Huh... a wife?");
MsgClose();
ChClose(1,0,30);
ChCustomLayout(1,5,0,-2.7);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(1,34,0,4,3,10,#1,0,0,0,30);
SEWait();
ChEyeOpenLevel(1,0);
VoicePlay("R080100000_01_140");
MsgDisp("Kazama","You're scratching a lot there.
...Here.");
ChEyeOpenLevel(1,10);
MsgClose();
ScrFadeOut(0,0,30);
SEPlay("EV_SE_505");
MsgDisp("","
Chuu");
MsgDisp("主人公","∋");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,7);
ChCheek(1,7);
ScrFadeIn(0,30);
MsgDisp("主人公","｛風真＊＊｝, on my forehead...");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("R080100000_01_150");
MsgDisp("Kazama","Isn't it fine since it's Christmas?");
ChEye(1,4);
MsgDisp("主人公","Jeez... hehe!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
Wait(60);
BGMStop(3);
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40,0);
MsgDisp("主人公","(And just like that, my last Christmas as
a high schooler was over...)");
MsgClose();
ChLayout(1);
ChPrmTblAdd(1,0);
