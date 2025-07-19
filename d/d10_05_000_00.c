BGOpen("sc510",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_A",0.01);
ChOpen(5,254,0,3,2,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("D100500000_05_000");
MsgDisp("Hiiragi","｛主人公｝, are you okay?");
MsgDisp("主人公","Eh?
｛柊＊＊＊｝, what's up?");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("D100500000_05_010");
MsgDisp("Hiiragi","Looks like it was nothing.
What a relief.");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
VoicePlay("D100500000_05_020");
MsgDisp("Hiiragi","I dreamt about you earlier so I hurried
here to check on you.");
MsgDisp("主人公","Hehe, oh.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,3);
Wait(20,1);
VoicePlay("D100500000_05_030");
MsgDisp("Hiiragi","Yes. Sorry for disturbing you. I don't
remember the exact details of the dream,
but I guess it smelled like roses?");
ChMotion(5,0);
VoicePlay("D100500000_05_040");
MsgDisp("Hiiragi","See you later, then.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(5);
MsgDisp("主人公","(The smell of roses...What's with that? A
dream, huh...Did ｛柊＊＊＊｝ doze off
during class?)");
MsgClose();
ScrFadeOut(0,0);
