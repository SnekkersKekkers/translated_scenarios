BGOpen("sc300",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(...｛風真＊＊｝, missed the graduation
ceremony...)");
SEPlay("EV_SE_DOOR_025");
SEWait();
VoiceEVSPlay(1);
VoicePlay("T020A30000_01_000");
MsgDisp("Kazama?","｛主人公｝.");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_HANYOU_D",0.01);
ChOpen(1,254,0,4,3,#1,#1,0,0);
MsgDisp("主人公","｛風真＊＊｝!
You're back!");
MsgDisp("主人公","But...the graduation ceremony is already
over.");
ChClose(1,0,30);
ChLayout(0);
SEPlay("EV_SE_544");
ChOpen(1,254,0,2,3,8,#1,0,0,0,30);
VoicePlay("T020A30000_01_010");
MsgDisp("Kazama","Sorry.
I did try to hurry though.");
MsgDisp("主人公","Yeah.
I'm glad we could graduate together...");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,4);
VoicePlay("T020A30000_01_020");
MsgDisp("Kazama","Ah, congratulations on graduating.");
MsgDisp("主人公","｛風真＊＊｝, you too.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("T020A30000_01_030");
MsgDisp("Kazama","I remember waiting for you on that hill on
the day of the entrance ceremony.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("T020A30000_01_040");
MsgDisp("Kazama","We haven't changed much since then, huh?");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
ChMouthOpenLevel(1,0);
ChCheek(1,5);
VoicePlay("T020A30000_01_050");
MsgDisp("Kazama","......");
SEPlay("EV_SE_DOOR_019");
SEWait();
ChMouth(1,2);
ChEyeOpenLevel(1,0);
ChClose(1,0,30);
ChLayout(1);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChOpen(1,254,0,2,2,0,#1,0,1,0,30);
ChOpen(2,254,3,0,3,#1,#1,0,2,0,30);
SEWait();
VoicePlay("T020A30000_02_000");
MsgDisp("Sassa","Ryota!
You're lateー!");
ChEye(1,2);
ChMouth(1,1);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("T020A30000_01_060");
MsgDisp("Kazama","Sassa, wait a second.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,3);
VoicePlay("T020A30000_02_010");
MsgDisp("Sassa","Huh?");
MsgDisp("主人公","｛颯砂＊＊｝, congratulations on graduating!");
ChEye(1,2);
ChMouth(1,3);
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3);
ChEyeOpenLevel(2,0);
VoicePlay("T020A30000_02_020");
MsgDisp("Sassa","Oh, that's right.
Congratulations on your graduation!");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("T020A30000_01_070");
MsgDisp("Kazama","In the end, it's the three of us together.
Childhood friends, or should I say,
longterm liabilities?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
VoicePlay("T020A30000_02_030");
MsgDisp("Sassa","Maybe.
Well then, shall these longterm
liabilities go home together?");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
VoicePlay("T020A30000_06_000");
MsgDisp("Himuro?","Have the childhood friends finished
talking?");
MsgClose();
BGOpen("sc130",1);
ChLayout(2);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChPosition(1,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ChPosition(2,1);
ChOpen(6,254,0,0,4,#1,#1,0,2);
ScrFadeIn(0);
VoicePlay("T020A30000_06_010");
MsgDisp("Himuro","Senpais, congratulations on your
graduation.");
MsgDisp("主人公","｛氷室＊＊｝, thank you.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("T020A30000_01_080");
MsgDisp("Kazama","Inori, you were waiting for me.
Thank you.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
VoicePlay("T020A30000_02_040");
MsgDisp("Sassa","Alright, now there's four of us.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("T020A30000_06_020");
MsgDisp("Himuro","You're so obvious Nozomu-senpai. it
doesn't make a difference whether I'm here
or not, does it?");
ChEye(1,0);
ChMouth(1,2);
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,0);
VoicePlay("T020A30000_02_050");
MsgDisp("Sassa","T-That's not true, right Ryota??");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("T020A30000_01_090");
MsgDisp("Kazama","Ah...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("T020A30000_06_030");
MsgDisp("Himuro","I'll let Ryota-senpai off the hook, after
all, he was rushing over here from England
and barely made it.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("T020A30000_06_040");
MsgDisp("Himuro","But, as for you and Nozomu-senpai...haa,
never mind.");
MsgDisp("主人公","Ah...sorry ｛氷室＊＊｝.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
VoicePlay("T020A30000_02_060");
MsgDisp("Sassa","I understand.
Inori, I'll do anything you say.");
ChEye(1,0);
ChMouth(1,2);
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,4);
VoicePlay("T020A30000_06_050");
MsgDisp("Himuro","Anything I say, right?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,1);
VoicePlay("T020A30000_02_070");
MsgDisp("Sassa","Right, a man never goes back on his word.
Right, Ryota?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("T020A30000_01_100");
MsgDisp("Kazama","Don't get me involved.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("T020A30000_06_060");
MsgDisp("Himuro","Then, here's a request for the three of
you.");
ChEye(1,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
MsgDisp("主人公","Yes, what is it?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
VoicePlay("T020A30000_06_070");
MsgDisp("Himuro","Can we...meet here too next year?");
ChEye(1,4);
ChMouth(1,3);
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("T020A30000_02_080");
MsgDisp("Sassa","Heheh, of course.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("T020A30000_01_110");
MsgDisp("Kazama","Obviously.");
MsgDisp("主人公","Yes.
｛氷室＊＊｝ the three of us will come
celebrate your graduation.");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,0);
VoicePlay("T020A30000_06_080");
MsgDisp("Himuro","If that's the case...
I'll forgive you guys for leaving me out
of the loop.");
ChMotion(1,0);
MsgDisp("主人公","Hehe, that's good.
Now, let's all go home together.");
BGMStop(5);
MsgClose();
ScrFadeOut(0,0,120);
ChClose(1,0,0);
ChClose(2,0,0);
ChClose(6,0,0);
Wait(300,0);
