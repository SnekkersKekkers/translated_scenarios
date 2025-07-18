ChEye(21,0);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("D140D07070_21_000");
MsgDisp("Michiru","Mikage-sensei is mysterious, don't you
think?");
MsgDisp("主人公","Mysterious...
You mean his hairstyle?");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,4,1);
VoicePlay("D140D07070_22_000");
MsgDisp("Hikaru","Oh, the ponytail on his left?
Or maybe you mean the croissant on top?");
MsgDisp("主人公","Croissant?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("D140D07070_22_010");
MsgDisp("Hikaru","You know what I mean.
The curly hair above his bangs.
At first I thought he was wearing a wig!");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("D140D07070_21_010");
MsgDisp("Michiru","Me too.
For a teacher, he really stands out.
I wonder if that's on purpose.");
MsgDisp("主人公","(Croissant...)");
SEPlay("EV_SE_017");
MsgDisp("","(Guu～)");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,0);
VoicePlay("D140D07070_21_020");
MsgDisp("Michiru","Hehe, I guess it's time for us to have
lunch.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
ChEyeOpenLevel(22,0);
VoicePlay("D140D07070_22_020");
MsgDisp("Hikaru","Aha!
Mari is so cute～▼");
MsgDisp("主人公","(Ugh...Now everytime I see
｛御影＊＊｝, I'll think
about croissants...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
