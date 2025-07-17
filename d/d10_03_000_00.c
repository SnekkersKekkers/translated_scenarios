BGOpen("sc100",0);
ChLayout(1);
BGMPlay("BGM_C03_HONDA_A",0.01);
MsgClose();
ChOpen(3,254,3,3,3,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("D100300000_03_000");
MsgDisp("Honda","Good Morningー!");
MsgDisp("主人公","Morning.
Hehe, you slept well.");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(3);
MsgClose();
SEWait();
ChLayout(0);
SEPlay("EV_SE_544",0,0.7,0.1);
ChOpen(3,254,5,0,4,0,#1,0,0);
VoicePlay("D100300000_03_010");
MsgDisp("Honda","Sniff sniff...
Huh?
It's gone.");
MsgDisp("主人公","Ehh∈ What is it?");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(3);
ChLayout(1);
MsgClose();
ChOpen(3,254,0,0,4,#1,#1,0,0);
VoicePlay("D100300000_03_020");
MsgDisp("Honda","Just now, did you smell roses?");
MsgDisp("主人公","Roses?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("D100300000_03_030");
MsgDisp("Honda","Hmm, maybe I'm mistaken?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("D100300000_03_040");
MsgDisp("Honda","Last night, I dreamt you were in a large
garden.
I could smell roses.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("D100300000_03_050");
MsgDisp("Honda","When I saw you just now, I swear I could
smell that same scent.");
MsgDisp("主人公","A garden of roses, huh...
That sounds like a really nice dream.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("D100300000_03_060");
MsgDisp("Honda","Right?
Let's meet again in our dreams!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(3);
MsgClose();
ScrFadeOut(0,0);
