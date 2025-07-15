MsgClose();
ChOpen(1,255,0,0,3,#1,#1,0,0);
ChMotion(1,1);
VoicePlay("G020110303_01_000");
MsgDisp("Kazama","It's overwhelming, isn't it, the sheer
number......");
MsgDisp("主人公","Yes, it's amazing.");
ChEye(1,4);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110303_01_010");
MsgDisp("Kazama","But they've been waiting in water and soil
for ten months to become adults..");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("G020110303_01_020");
MsgDisp("Kazama","I really feel for the fireflies.");
MsgDisp("主人公","If ｛風真＊＊｝ was a firefly, he'd shine
wonderfully, wouldn't he?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G020110303_01_030");
MsgDisp("Kazama","What? If you were a firefly——Ah right,
adult fireflies don't eat, do they?");
MsgDisp("主人公","Hey.
I'm not that much of a glutton.");
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3,1);
VoicePlay("G020110303_01_040");
MsgDisp("Kazama","Haha.
So, you'd be a female flying around?");
EfctClose();
EfctOpen(7);
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("G020110303_01_050");
MsgDisp("Kazama","......It's hard to find you, so just stay
still for a bit.");
MsgDisp("主人公","Hehe.
Hey, why are you telling me off?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020110303_01_060");
MsgDisp("Kazama","My bad, you're right.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G020110303_01_070");
MsgDisp("Kazama","......Hm? Wait, there's something
fluttering in front of us, isn't there?");
MsgDisp("主人公","Agh!　It landed on my head∋");
ChEye(1,3);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("G020110303_01_080");
MsgDisp("Kazama","What?
Wait a second.");
SEPlay("EV_SE_FOOT_039");
MsgClose();
ScrFadeOut(0,0,30);
SEWait();
EfctClose();
BGOpen("ex990",0);
BGOpen("fp201",2);
VoicePlay("G020110303_01_090");
MsgDisp("Kazama","——Geez, I'll get rid of it.");
Wait(40,0);
ChLayout(0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ScrFadeIn(0);
VoicePlay("G020110303_01_100");
MsgDisp("Kazama","It finally flew away.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(1,0,30);
ChLayout(1);
SEWait();
MsgClose();
ChOpen(1,255,0,0,2,#1,#1,0,0,0,30);
MsgDisp("主人公","Haa, I was so surprised.");
ChEye(1,1);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110303_01_110");
MsgDisp("Kazama","Haa......that reminds me..");
EfctClose();
EfctOpen(7);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020110303_01_120");
MsgDisp("Kazama","This morning, there was someone bothering
you, right?");
MsgDisp("主人公","Ah, yeah.");
ChEye(1,1);
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("G020110303_01_130");
MsgDisp("Kazama","If they come near you again──");
ChEye(1,1);
ChMouth(1,1);
ChMotion(1,1);
VoicePlay("G020110303_01_140");
MsgDisp("Kazama","I'll teach you some manners!
Don't get close to her again!");
MsgDisp("主人公","(｛風真＊＊｝, that was a firefly just
now?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
EfctClose();
