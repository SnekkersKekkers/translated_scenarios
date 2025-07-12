BGOpen("sc823",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Wow, so pretty......!");
MsgClose();
ChOpen(5,254,0,4,4,#1,#1,0,1,0,30);
ChOpen(7,254,4,0,0,#1,#1,0,2,0,30);
VoicePlay("Q070C00200_05_000");
MsgDisp("Hiiragi","It is said to be 150 years old......
It still looks very usable.");
MsgDisp("主人公","Yeah, I'm sure it has been really well
kept.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("Q070C00200_07_000");
MsgDisp("Mikage","Yeah. Although the connections we have
right now are important, the connections
of the past should also be treasured.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("Q070C00200_05_010");
MsgDisp("Hiiragi","Indeed, I agree completely.");
ChEye(7,3);
ChMouth(7,0);
ChMotion(7,3);
ChEyeOpenLevel(7,0);
VoicePlay("Q070C00200_07_010");
MsgDisp("Mikage","The traders who once lived here traveled
around a lot like you, Yanosuke. Then
they decided to stay here in Nagasaki.");
ChEye(5,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("Q070C00200_07_020");
MsgDisp("Mikage","There's stuff you can't learn unless
you come here. There's stuff you can only
understand if you touch and feel them.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("Q070C00200_07_030");
MsgDisp("Mikage","That's the point of this trip.
Shall we go inside the mansion then?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("Q070C00200_05_020");
MsgDisp("Hiiragi","Yeah.");
MsgDisp("主人公","Yes!");
MsgClose();
SEPlay("EV_SE_856",0,0.6);
ChClose(7,0,30);
ChClose(5,0,30);
MsgDisp("主人公","( I wanted to tell ｛氷室＊＊｝
the story about ｛御影＊＊｝...
Right! I'll just tell him in the report.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
