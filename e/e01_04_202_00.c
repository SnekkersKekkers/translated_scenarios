BGOpen("wf100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(It's time to go home......)");
MsgDisp("主人公","Hm?");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChNanaType(0);
ChOpen(4,255,0,0,4,-1,-1,0,1);
ChOpen(5,255,0,4,4,-1,-1,0,2);
VoicePlay("E010420200_05_000");
MsgDisp("Hiiragi","Thank you for your time today.");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("E010420200_04_000");
MsgDisp("Nanatsumori","No problem.");
MsgDisp("主人公","｛七ツ森＊｝, ｛柊＊＊＊｝!");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoiceEVSPlay(5);
VoicePlay("E010420200_05_010");
MsgDisp("Hiiragi","｛主人公｝, hello.
Are you shopping as well?");
MsgDisp("主人公","Yeah.");
ChEye(4,1);
ChMouth(4,3);
VoicePlay("E010420200_04_010");
MsgDisp("Nanatsumori","I gave Yano-san the opportunity to enjoy
the 1 Rich shop to the fullest.");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,3);
VoicePlay("E010420200_05_020");
MsgDisp("Hiiragi","It was a very fulfilling experience.");
MsgDisp("主人公","I see.
Did you find anything good?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("E010420200_05_030");
MsgDisp("Hiiragi","Yes, all thanks to Nanatsumori-kun.");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("E010420200_04_020");
MsgDisp("Nanatsumori","Makeup remover and cotton among other
things. The quality at 1 Rich shops isn't
so bad nowadays.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010420200_05_040");
MsgDisp("Hiiragi","They are often used by the theater
company, so I cannot get anything
extravagant. It's a big help.");
ChEye(4,5);
ChMouth(4,4);
ChMotion(4,1,1);
VoicePlay("E010420200_04_030");
MsgDisp("Nanatsumori","Wow-......
You're the leader, an actor,
and a handyman.
Yano-san, you're seriously amazing.");
ChEye(5,2);
ChMouth(5,4);
ChEyeOpenLevel(5,0);
MsgDisp("主人公","I agree.");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
VoicePlay("E010420200_05_050");
MsgDisp("Hiiragi","No, the way I see it, you and
Nanatsumori-kun are much more amazing.
Well, goodbye for now.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
ChClose(5,0,30);
Wait(30);
ChPosition(4,0);
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,2,1);
VoicePlay("E010420200_04_040");
MsgDisp("Nanatsumori","......His energy is definitely different.
Is that what happens when you're
at a leader level?");
MsgDisp("主人公","(Hehe!
I guess ｛七ツ森＊｝ really respects
｛柊＊＊＊｝ )");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
