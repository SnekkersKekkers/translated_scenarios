BGOpen("ho000",0);
ScrFadeIn(0);
SEPlay("EV_SE_787");
SEWait();
MsgDisp("主人公","(Ah, it's an email from Habatcher's
Editorial Department.)");
MsgDisp("主人公","(Let's see, it says...... \"
A fishing tournament is being held at the
Habataki Campsite\"......)");
MsgDisp("主人公","(A good opportunity for an interview!)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0,0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr520",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I believe the tournament area was this
way......)");
VoiceEVSPlay(1);
VoicePlay("D010100700_01_000");
MsgDisp("Kazama?","｛主人公｝.");
MsgClose();
SEPlay("EV_SE_628");
SEWait();
ChOpen(1,255,0,0,3,#1,#1,0,0);
MsgDisp("主人公","Eh......
｛風真＊＊｝∋
What are you doing here?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("D010100700_01_010");
MsgDisp("Kazama","I should be asking you that question.
You're such a busybody.");
MsgDisp("主人公","Geez, I'm doing my part-time job for
Habatcher.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D010100700_01_020");
MsgDisp("Kazama","It's fine if you want to interview me, but
I'm serious about this, so don't get in my
way."); 
MsgDisp("Kazama","If you make a fuss, the fish will run
away.");
MsgDisp("主人公","Got it.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("D010100700_48_000");
MsgDisp("Staff","All fishing tournament participants,
please gather at the area behind the
campsite.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("D010100700_01_030");
MsgDisp("Kazama","Time to go.");
MsgClose();
SEPlay("EV_SE_626");
ChClose(1);
MsgDisp("主人公","｛風真＊＊｝, good luck∈");
VoicePlay("D010100700_01_040");
MsgDisp("Kazama","......Geez, what a loud person.");
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlOpen("ev_01_14");
StlEye(1,0);
StlMouth(1,0);
BGMPlay("BGM_C01_RYOUTA_B",0.01);
SEPlay("EV_SE_606");
ScrFadeIn(0);
Wait(60,0);
MsgDisp("主人公","(Woah, amazing......
Looks like ｛風真＊＊｝ caught
another fish!)");
StlEyeOpenLevel(1,5);
VoicePlay("D010100700_01_050");
MsgDisp("Kazama","Yes, got it!");
SEPlay("EV_SE_573",0,0.6);
Wait(60,0);
StlEyeOpenLevel(1,#1);
MsgDisp("主人公","(Hehe, looks fun!)");
SEWait();
MsgClose();
ScrFadeOut(0,0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr520",0);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛風真＊＊｝, congrats on
winning!");
BGMVol(0.5,2);
ChEye(1,2);
ChMotion(1,3);
VoicePlay("D010100700_01_060");
MsgDisp("Kazama","Thank you.
...... Wait, is this a Habatcher
interview?");
MsgDisp("主人公","Ah......Right! A small interview, then.
Can you tell us about fly fishing?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D010100700_01_070");
MsgDisp("Kazama","What a ditz. Ahem. Fly Fishing comes from
England. It uses a lure resembling an
insect called the \"Fly\"");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("D010100700_01_080");
MsgDisp("Kazama","If the lure you use resembles the insect
the fish eat, you can catch fish like I
did today.");
MsgDisp("主人公","I see, that's how you catch them.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("D010100700_01_090");
MsgDisp("Kazama","Your powers of attraction might have had
something to do with it too?");
MsgDisp("主人公","My powers of attraction?");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,3);
VoicePlay("D010100700_01_100");
MsgDisp("Kazama","Wait here a minute.
Let me get my stuff.");
MsgClose();
BGMStop();
SEPlay("EV_SE_626");
ChClose(1);
MsgDisp("主人公","(Hehe ｛風真＊＊｝ is in a good
mood today. Maybe someday he can teach me
how to do fly fishing?)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(1,0);
