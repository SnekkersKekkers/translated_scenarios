BGOpen("sc210",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(What nice weather......
I still have some break time, so maybe
I'll do some sketching?)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","(Okay, that's enough for today. ——That's
right ｛柊＊＊＊｝, Might still be in the
student council room. Let's go and take a
look.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0,0);
SEWait();
Wait(40,0);
SEPlay("EV_SE_DOOR_024");
SEWait();
SEPlay("EV_SE_DOOR_013");
SEWait();
BGOpen("ev005",0);
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
ChOpen(5,100,1,1,1,12,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110500900_05_000");
MsgDisp("Hiiragi","Ah. 
Perhaps you're finished?");
ChEyeOpenLevel(5,12);
MsgDisp("主人公","Eh?");
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,13);
VoicePlay("G110500900_05_010");
MsgDisp("Hiiragi","Drawing, that is.");
ChEyeOpenLevel(5,0);
Wait(10,0);
ChMouth(5,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G110500900_05_020");
MsgDisp("Hiiragi","............");
MsgDisp("主人公","Ahaha. ｛柊＊＊＊｝'s jokes are funny.'");
ChEyeOpenLevel(5,0);
Wait(10,0);
ChMouth(5,1);
ChEyeOpenLevel(5,13);
VoicePlay("G110500900_05_030");
MsgDisp("Hiiragi","It's funny when a usually dull guy says
it, isn't it?");
MsgDisp("主人公","｛柊＊＊＊｝ is always fun though?");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
SEPlay("EV_SE_712");
VoicePlay("G110500900_05_040");
MsgDisp("Hiiragi","Haha, thank you, I can't compare to you
though.");
MsgDisp("主人公","Seriously. The picture I drew, Isn't good
to the extent I can show ｛柊＊＊＊｝.");
SEStop("EV_SE_712",0);
ChEye(5,0);
ChMotion(5,2);
VoicePlay("G110500900_05_050");
MsgDisp("Hiiragi","Ah, I won't ask for anything unreasonable.
By the way, what is the subject?");
MsgDisp("主人公","The cat I see sunbathing in the courtyard
sometimes.");
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
VoicePlay("G110500900_05_060");
MsgDisp("Hiiragi","I see.
I'm looking forwards to meeting the cat.");
MsgDisp("主人公","It usually just hangs out in the courtyard
though?");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
SEPlay("EV_SE_712");
VoicePlay("G110500900_05_070");
MsgDisp("Hiiragi","No, I meant the one in your work.");
MsgDisp("主人公","(I have a feeling he'll see it some
day......)");
BGMStop();
SEStop("EV_SE_712",1);
MsgClose();
ScrFadeOut(0,0);
