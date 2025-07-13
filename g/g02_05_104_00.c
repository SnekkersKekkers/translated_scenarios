MsgClose();
ChOpen(5,255,0,4,4,#1,#1,0,0);
VoicePlay("G020510400_05_000");
MsgDisp("Hiiragi","How does it appear to you?");
MsgDisp("主人公","Huh? It's a beautiful and lovely scenery.");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
VoicePlay("G020510400_05_010");
MsgDisp("Hiiragi","I see how it is.
I'm feeling impatient......");
MsgDisp("主人公","Eh?");
ChEye(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G020510400_05_020");
MsgDisp("Hiiragi","I am aware of the reason.
It is you.");
ChMotion(5,2);
VoicePlay("G020510400_05_030");
MsgDisp("Hiiragi","Watching the fireflies,
In the midst of so many,
I wonder if I can be chosen by you.");
ChEyeOpenLevel(5,0);
VoicePlay("G020510400_05_040");
MsgDisp("Hiiragi","That sort of impatience wells up from
within me.");
ChEyeOpenLevel(5,#1);
MsgDisp("主人公","Umm......");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("G020510400_05_050");
MsgDisp("Hiiragi","The fireflies are doing their best too.
I need to shine brightly as well. 
So that you might choose me.");
MsgDisp("主人公","｛柊＊＊＊｝......");
ChEye(5,4);
VoicePlay("G020510400_05_060");
MsgDisp("Hiiragi","Someday, if I can see this place simply as
a beautiful scenery, maybe that's when
I'll have gained confidence in myself?");
ChMotion(5,4);
VoicePlay("G020510400_05_070");
MsgDisp("Hiiragi","For now it's no good. It appears I'm
emotionally invested in a single
firefly...");
MsgDisp("主人公","(Today, I have a feeling ｛柊＊＊＊｝
is different to usual......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
