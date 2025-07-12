MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0);
VoicePlay("G020130001_01_000");
MsgDisp("Kazama","We've been spending more time together
with all four of us recently, so time that
I can relax and enjoy with you is
precious.");
MsgDisp("主人公","But it's fun when we're all together.");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,4);
ChEyeOpenLevel(1,8);
VoicePlay("G020130001_01_010");
MsgDisp("Kazama","Mmmm, yeah, that's true......");
MsgDisp("主人公","Is something bothering you?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020130001_01_020");
MsgDisp("Kazama","I'm always okay with spending my time
only with you. It's just that I don't hate
being with them.");
MsgDisp("主人公","Huh? But, ｛風真＊＊｝, you always look
like you're having a lot of fun when
you're with ｛颯砂＊＊｝ and ｛氷室＊＊｝.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("G020130001_01_030");
MsgDisp("Kazama","There you go again. You really don't get
it. Listen, I'm not being with them.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("G020130001_01_040");
MsgDisp("Kazama","I'm being with you, and you're being with
them. The two things are totally
different.");
MsgDisp("主人公","Ummm......");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020130001_01_050");
MsgDisp("Kazama","I don't go to the cafeteria with just
Sassa, and I don't watch movies with just
Inori. It's because you're there; get it
now?");
MsgDisp("主人公","But I see the three of you talking at
school all the time.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
ChCheek(1,5);
Wait(8,0);
ChMotion(1,1);
VoicePlay("G020130001_01_060");
MsgDisp("Kazama","Th-that's just......you know, Inori
randomly deciding to mess with me......");
ChEye(1,1);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
ChCheek(1,7);
VoicePlay("G020130001_01_070");
MsgDisp("Kazama","And Sassa bothering me to arm-wrestle him
to 'test my strength'...... They're both
such brats. Just huge pains to deal with.");
MsgDisp("主人公","(Hahah. So, basically, you're all
friends!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
