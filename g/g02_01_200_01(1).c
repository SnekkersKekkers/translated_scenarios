MsgClose();
ChOpen(1,255,0,4,2,#1,#1,0,0);
VoicePlay("G020120001_01_000");
MsgDisp("Kazama","It's beautiful but...... they're
desperately shining to find a partner.");
MsgDisp("主人公","I see.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020120001_01_010");
MsgDisp("Kazama","They wait for 10 months to finally
become adults......");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020120001_01_020");
MsgDisp("Kazama","I waited for 10 years too. So, I won't
give up and fade out like that.");
MsgDisp("主人公","｛風真＊＊｝, what's wrong?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,4);
ChEyeOpenLevel(1,0);
VoicePlay("G020120001_01_030");
MsgDisp("Kazama","I don't even know why I started saying
this. Watching the fireflies, I just
couldn't hold back anymore.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020120001_01_040");
MsgDisp("Kazama","Listen, it can't be helped if you choose
someone other than me. But, I have a
responsibility to my younger self, from
first grade to ninth grade.");
MsgDisp("主人公","｛風真＊＊｝……");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G020120001_01_050");
MsgDisp("Kazama","Sorry. If things stay like this, my
younger self won't be satisfied");
MsgDisp("主人公","(Today's ｛風真＊＊｝ is different to
usual. I wonder what's wrong......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
