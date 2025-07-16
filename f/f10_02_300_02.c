BGOpen("sc310",0);
ChLayout(2);
ScrFadeIn(0);
MsgDisp("主人公","(Ah, ｛みちる＊｝,
｛ひかる＊｝ and...
｛颯砂＊＊｝? )");
BGMPlay("BGM_HANYOU_A",0.01);
MsgClose();
ChOpen(2,254,0,0,4,#1,#1,0,0,0,30);
ChOpen(22,254,0,0,3,#1,#1,0,1,0,30);
ChOpen(21,254,0,0,4,#1,#1,0,2,0,30);
MsgDisp("主人公","Ah, you three are together, so I'm
guessing you're talking about gap moe?");
ChMotion(22,4,1);
VoicePlay("F100230002_22_000");
MsgDisp("Hikaru","Right.
Today is big sis's turn!");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,1);
VoicePlay("F100230002_21_000");
MsgDisp("Michiru","Stop it, you two.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,2);
VoicePlay("F100230002_02_000");
MsgDisp("Sassa","Oh? So even Michiru-san has a side that's
different from how she looks? What is it?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ChEye(22,1);
ChMouth(22,2);
ChMotion(22,0,1);
ChEyeOpenLevel(22,0);
VoicePlay("F100230002_22_010");
MsgDisp("Hikaru","Hmmm... For Hikaru, even that's just a
part of my older sister. It's difficult.");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,5);
VoicePlay("F100230002_21_010");
MsgDisp("Michiru","You don't have to force yourself to think
about it.");
ChEye(22,0);
ChMouth(22,2);
VoicePlay("F100230002_22_020");
MsgDisp("Hikaru","Ah!
Shoujo manga——");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,5);
ChEye(21,1);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("F100230002_21_020");
MsgDisp("Michiru","Hikaru, no.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("F100230002_22_030");
MsgDisp("Hikaru","Why～");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("F100230002_02_010");
MsgDisp("Sassa","But, even if Michiru-san likes shoujo
manga, it's not that much of a gap.");
MsgDisp("主人公","Yeah. Both ｛みちる＊｝
and ｛ひかる＊｝ look
like they would like girly things.");
ChMotion(22,0,1);
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,5);
ChCheek(21,6);
VoicePlay("F100230002_21_030");
MsgDisp("Michiru","Hey, let's stop this conversation here.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("F100230002_02_020");
MsgDisp("Sassa","Hmmm.
Maybe it's refreshing that she gets that
bashful?");
ChEye(21,5);
ChMouth(21,4);
ChMotion(21,0);
ChCheek(21,10);
VoicePlay("F100230002_21_040");
MsgDisp("Michiru","Eh...?");
ChEye(21,1);
ChMouth(21,4);
ChMotion(21,3);
ChEyeOpenLevel(3,0);
VoicePlay("F100230002_21_050");
MsgDisp("Michiru","Classes are starting.
Then, this is it from me.");
SEPlay("EV_SE_856",0,0.5);
MsgClose();
ChClose(21,0,30);
ChClose(22,0,30);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("F100230002_02_030");
MsgDisp("Sassa","Michiru-san is surprisingly shy?
But, I wouldn't really call that a gap.");
MsgDisp("主人公","Hehe, maybe?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,3);
ChEyeOpenLevel(2,7);
VoicePlay("F100230002_02_040");
MsgDisp("Sassa","But, you're the most difficult one.
It's not that you don't have gaps, rather,
you're filled with nothing but gaps...");
MsgDisp("主人公","(???)");
BGMStop();
MsgClose();
ScrFadeOut(0);
