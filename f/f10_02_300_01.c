BGOpen("sc310",0);
ChLayout(2);
ScrFadeIn(0);
MsgDisp("主人公","(Ah,｛みちる＊｝,｛ひかる＊｝ and...
｛颯砂＊＊｝?)");
BGMPlay("BGM_HANYOU_A",0.01);
MsgClose();
ChOpen(2,254,3,0,4,-1,-1,0,0,0,30);
ChOpen(21,254,0,0,0,-1,-1,0,1,0,30);
ChOpen(22,254,0,0,2,-1,-1,0,2,0,30);
MsgDisp("主人公","What are you three talking about?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("F100230001_02_000");
MsgDisp("Sassa","It's you, 
you came in at a good time.");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("F100230001_21_000");
MsgDisp("Michiru","Definitely.
We have to ask Mari for
her opinion here.");
MsgDisp("主人公","Are you talking about
gap moe again?");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("F100230001_02_010");
MsgDisp("Sassa","Yeah.
Today it's about Hikaru-san's gap.");
ChEye(22,0);
ChMouth(22,2);
ChMotion(22,4,1);
ChEyeOpenLevel(22,6);
ChEye(2,0);
ChEyeOpenLevel(2,10);
VoicePlay("F100230001_22_000");
MsgDisp("Hikaru","Is it really a gap?
Hikaru just loves hamburgers.");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("F100230001_21_010");
MsgDisp("Michiru","I grew up in the same environment,
but I don't have any emotional 
attachment to hamburgers.");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,2);
VoicePlay("F100230001_02_020");
MsgDisp("Sassa","But when you think of Hikaru-san's 
favorite food, doesn't high-class
French cuisine come to mind?
And yet, it's hamburgers?");
ChMouth(22,1);
ChMotion(22,1,1);
VoicePlay("F100230001_22_010");
MsgDisp("Hikaru","Is that a gap?
They're easy to eat, and there's lots 
of variety. I'm sure everyone
loves it.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
MsgDisp("主人公","That is a gap...");
ChEye(22,2);
ChMouth(22,2);
ChMotion(22,0,1);
VoicePlay("F100230001_22_020");
MsgDisp("Hikaru","Mari, you too...
I don't get it,
Hikaru doesn't get it...");
MsgClose();
SEPlay("EV_SE_856",0,0.6);
MsgClose();
ChClose(22,0,30);
ChClose(21,0,30);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("F100230001_02_030");
MsgDisp("Sassa","If Hikaru-san
was eating a hamburger on a street 
corner, she'd look cool.");
MsgDisp("主人公","(I see.
So that's ｛ひかる＊｝ 's gap moe...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
