MsgClose();
ChOpen(1,255,0,0,3,-1,-1,0,0);
ChMotion(1,1);
VoicePlay("G020110303_01_000");
MsgDisp("Kazama","This is a really impressive number of
fireflies......");
MsgDisp("主人公","Yeah, it's amazing.");
ChEye(1,4);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110303_01_010");
MsgDisp("Kazama","But they did wait for ten months
underwater and underground to become
full-fledged adult insects.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("G020110303_01_020");
MsgDisp("Kazama","I empathize with them.");
MsgDisp("主人公","I think you'd shine a really pretty color
if you were a firefly, ｛風真＊＊｝.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G020110303_01_030");
MsgDisp("Kazama","What's this? If you were a firefly-wait,
no. The adults don't eat food.");
MsgDisp("主人公","Rude, I'm not that into eating.");
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3,1);
VoicePlay("G020110303_01_040");
MsgDisp("Kazama","Hahah. Then I'd guess you'd be flying
around even though you're female.");
EfctClose();
EfctOpen(7);
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("G020110303_01_050");
MsgDisp("Kazama","......That makes it harder for me to find
you, so hold still a bit more, would you?");
MsgDisp("主人公","Hahah. What are you getting upset over?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020110303_01_060");
MsgDisp("Kazama","Yeah, sorry.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G020110303_01_070");
MsgDisp("Kazama","......Mm? Actually, hasn't one of them
been hanging out in front of us for a
while now?");
MsgDisp("主人公","Wah! It stopped on my head∋");
ChEye(1,3);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("G020110303_01_080");
MsgDisp("Kazama","What's this? Hold still for a sec.");
SEPlay("EV_SE_FOOT_039");
MsgClose();
ScrFadeOut(0,0,30);
SEWait();
EfctClose();
BGOpen("ex990",0);
BGOpen("fp201",2);
VoicePlay("G020110303_01_090");
MsgDisp("Kazama","-Beat it already.");
Wait(40,0);
ChLayout(0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ScrFadeIn(0);
VoicePlay("G020110303_01_100");
MsgDisp("Kazama","It finally flew off.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(1,0,30);
ChLayout(1);
SEWait();
MsgClose();
ChOpen(1,255,0,0,2,-1,-1,0,0,0,30);
MsgDisp("主人公","(sigh) That was a surprise.");
ChEye(1,1);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110303_01_110");
MsgDisp("Kazama","(sigh) That reminded me.");
EfctClose();
EfctOpen(7);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020110303_01_120");
MsgDisp("Kazama","There was that guy making passes at you
this morning, remember?");
MsgDisp("主人公","Oh, yeah.");
ChEye(1,1);
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("G020110303_01_130");
MsgDisp("Kazama","The next time they get close to you-");
ChEye(1,1);
ChMouth(1,1);
ChMotion(1,1);
VoicePlay("G020110303_01_140");
MsgDisp("Kazama","You're so persistent! Don't ever come near
her again!");
MsgDisp("主人公","(｛風真＊＊｝, it was just a firefly
this time.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,-1);
ChMouthOpenLevel(1,-1);
ChCheek(1,0);
EfctClose();
