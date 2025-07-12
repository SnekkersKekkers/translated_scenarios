MsgClose();
ChOpen(1,255,0,4,3,#1,#1,0,0);
VoicePlay("G020110101_01_000");
MsgDisp("Kazama","When we come here, you seem cute.");
ChEye(1,3);
ChMouth(1,2);
ChMotion(1,3);
ChCheek(1,5);
VoicePlay("G020110101_01_010");
MsgDisp("Kazama","No, that's not right. You've always been
cute, since we were kids, it's just-");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("G020110101_01_020");
MsgDisp("Kazama","Wait, what am I even saying......");
MsgDisp("主人公","Um......You're embarrassing me.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
ChCheek(1,7);
VoicePlay("G020110101_01_030");
MsgDisp("Kazama","You know what, screw it. Okay, so Sassa
and Inori seem to getting along with you
recently.");
ChEye(1,1);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110101_01_040");
MsgDisp("Kazama","But I found you waaaay before them. I'm
not saying that the early bird catches the
worm.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G020110101_01_050");
MsgDisp("Kazama","Just that the one who finds their partner
first has the advantage. The same goes for
fireflies. So I'm not worried at all.");
ChEye(1,3);
ChMouth(1,2);
ChCheek(1,0);
MsgDisp("主人公","Is something wrong, ｛風真＊＊｝?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,4);
ChEyeOpenLevel(1,8);
ChCheek(1,0);
VoicePlay("G020110101_01_060");
MsgDisp("Kazama","I don't know......What is up with me?");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("G020110101_01_070");
MsgDisp("Kazama","(sigh)......The place is kinda dangerous.");
MsgDisp("主人公","(Maybe that was......how ｛風真＊＊｝
really feels right now?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
