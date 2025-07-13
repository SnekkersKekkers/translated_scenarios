MsgClose();
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
VoiceEVSPlay(4);
VoicePlay("G020420200_04_000");
MsgDisp("Nanatsumori","｛主人公｝. I need you to
listen to this truth.");
MsgDisp("主人公","What?");
ChMotion(4,1,1);
VoicePlay("G020420200_04_010");
MsgDisp("Nanatsumori","Do you love Kazama?");
MsgDisp("主人公","Huh∋");
ChEye(4,4);
ChMotion(4,0,1);
VoicePlay("G020420200_04_020");
MsgDisp("Nanatsumori","Well, do you?");
MsgDisp("主人公","That's...");
ChEye(4,1);
ChMouth(4,0);
ChMotion(4,2,1);
VoicePlay("G020420200_04_030");
MsgDisp("Nanatsumori","I won't be satisfied until I have
an answer. I'm losing... my groove.");
ChEye(4,2);
ChMouth(4,4);
VoicePlay("G020420200_04_040");
MsgDisp("Nanatsumori","You were always right beside me,
and now you're not-");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("G020420200_04_050");
MsgDisp("Nanatsumori","But, as long as you're happy.
If you choose him, so be it.
I support you.");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("G020420200_04_060");
MsgDisp("Nanatsumori","But when we are together like this,
I start thinking about you again...");
ChEye(4,1);
ChMouth(4,0);
ChMotion(4,2,1);
ChMouthOpenLevel(4,0);
VoicePlay("G020420200_04_070");
MsgDisp("Nanatsumori","............");
MsgDisp("主人公","(｛七ツ森＊｝... he seems to care about
｛風真＊＊｝ too.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
