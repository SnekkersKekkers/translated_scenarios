MsgClose();
ChClose(1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Well then, with that, it seems everything
is finished.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(1,254,0,0,3,#1,#1,0,0);
ChEye(1,4);
VoicePlay("P840100002_01_000");
MsgDisp("Kazama","Here she is, here she is, Japan's ＭＶＰ.
It was a huge success.");
MsgDisp("主人公","Hehe, thank you.
It was because ｛風真＊＊｝ was
looking out for me.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P840100002_01_010");
MsgDisp("Kazama","You were just looking after everyone, that
you didn't get to comfortably enjoy
yourself.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("P840100002_01_020");
MsgDisp("Kazama","Look, I bought lots of things that you
like in advance.
Let's eat.");
MsgDisp("主人公","Waa, thank you!");
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("P840100002_01_030");
MsgDisp("Kazama","Well...there's roasted sweet potatoes too.");
MsgDisp("主人公","Yay!
Thank you!");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P840100002_01_040");
MsgDisp("Kazama","Can you forgive me for it being cold?");
MsgDisp("主人公","I forgive you!
...Huhu!");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3,1);
ChEyeOpenLevel(1,8);
VoicePlay("P840100002_01_050");
MsgDisp("Kazama","I accept your forgiveness.
Thank you very muーch.");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P840100002_01_060");
MsgDisp("Kazama","Then, let's eat this cold sweet potato
together.");
MsgDisp("主人公","(I'm happy.
｛風真＊＊｝ is caring for me!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
