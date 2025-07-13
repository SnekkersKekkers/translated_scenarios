MsgClose();
ChOpen(1,255,1,0,3,#1,#1,0,0);
ChMotion(1,1);
VoicePlay("G020110000_01_000");
MsgDisp("Kazama","This is amazing...... It's like a
dream......");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(16,0);
ChEye(1,0);
ChMouth(1,0);
VoicePlay("G020110000_01_010");
MsgDisp("Kazama","......Actually, I dream about you a lot,
have for a while now.");
MsgDisp("主人公","Huh?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G020110000_01_020");
MsgDisp("Kazama","A dream where you're playing with someone
I don't know in a garden full of blooming
flowers.");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110000_01_030");
MsgDisp("Kazama","I start running to you, but I can't get
any closer. It's always been the same
dream, ever since I went to the UK.");
MsgDisp("主人公","So not a happy dream?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020110000_01_040");
MsgDisp("Kazama","Not necessarily. Since I was happy just
seeing you, even if it was a dream.");
MsgDisp("主人公","｛風真＊＊｝......");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020110000_01_050");
MsgDisp("Kazama","Even after coming back, I keep having
the same dream. But now, I can get in the
garden too.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,4);
VoicePlay("G020110000_01_060");
MsgDisp("Kazama","Even though I couldn't even get close back
then.");
MsgDisp("主人公","Right.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020110000_01_070");
MsgDisp("Kazama","......But for some reason, we're both
still tiny primary schoolers.");
MsgDisp("主人公","Hahah.");
MsgDisp("主人公","(So ｛風真＊＊｝ dreams about me......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
