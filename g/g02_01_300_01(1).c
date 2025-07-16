MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0);
VoicePlay("G020130001_01_000");
MsgDisp("Kazama","Lately, we've been spending more time
together with the four of us, so it's
precious to spend some quality time with
just you.");
MsgDisp("主人公","It's fun with everyone, huh?");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,4);
ChEyeOpenLevel(1,8);
VoicePlay("G020130001_01_010");
MsgDisp("Kazama","Hmm, well that's......");
MsgDisp("主人公","What's wrong?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020130001_01_020");
MsgDisp("Kazama","I'd be fine with just the two of us
anytime.
It's not that I dislike being with them.");
MsgDisp("主人公","Eh? ｛風真＊＊｝, you have lots
of fun when ｛颯砂＊＊｝ and
｛氷室＊＊｝ are there, though?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("G020130001_01_030");
MsgDisp("Kazama","That's it, don't you get it?
Listen, I'm not together with them.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("G020130001_01_040");
MsgDisp("Kazama","When those guys are there, I'm only with
you.
It's a completely differerent thing.");
MsgDisp("主人公","Umm......");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020130001_01_050");
MsgDisp("Kazama","I don't go to the cafeteria with Hayasaka
alone, or watch movies with Inori alone.
It's because you're there. Understand?");
MsgDisp("主人公","But I often see the three of you talking
at school?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
ChCheek(1,5);
Wait(8,0);
ChMotion(1,1);
VoicePlay("G020130001_01_060");
MsgDisp("Kazama","Ah, well that's...... you know, Inori
teasing me for no reason......");
ChEye(1,1);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
ChCheek(1,7);
VoicePlay("G020130001_01_070");
MsgDisp("Kazama","and Sassa challenging me to arm wrestling,
calling it a strength test...... Those
guys are really such brats, so troubling.");
MsgDisp("主人公","(Hehe.
In other words, you get along well, huh!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
