BGOpen("tr500",0);
MsgClose();
ChOpen(2,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","It's looks like there are a lot of
hands-on activities right now.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,3);
VoicePlay("B050200000_02_000");
MsgDisp("Sassa","Yeah. Horse riding, sheep
shearing......eh.");
ChEye(2,5);
ChMouth(2,2);
ChMotion(2,0);
VoicePlay("B050200000_02_010");
MsgDisp("Sassa","......C-Cow......Milking?");
MsgDisp("主人公","Yeah? ｛颯砂＊＊｝, do you want to try
milking?");
ChEye(2,5);
ChMouth(2,1);
ChMotion(2,5);
ChCheek(2,10);
VoicePlay("B050200000_02_020");
MsgDisp("Sassa","Eh......∋ When you say it like that, it
sounds kind of awesome.");
MsgDisp("主人公","Eh, why?");
ChEye(2,5);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("B050200000_02_030");
MsgDisp("Sassa","Why you ask......");
MsgDisp("主人公","?
So do you want to milk them?");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("B050200000_02_040");
MsgDisp("Sassa","I do.");
MsgClose();
ScrFadeOut(0);
ChClose(2,0,0);
StlOpen("ev_02_01");
StlEye(2,0);
StlMouth(2,1);
StlEyeOpenLevel(2,5);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_C02_SASSA_B",0.01);
ScrFadeIn(0);
VoicePlay("B050200000_02_050");
MsgDisp("Sassa","I see......");
MsgDisp("主人公","Uhm......So I hold it firmly at the base
and squeeze——");
SEPlay("EV_SE_521");
SEWait();
StlEye(2,0);
StlMouth(2,0);
VoicePlay("B050200000_02_060");
MsgDisp("Sassa","OOH!");
MsgDisp("主人公","I think I'm starting to get the hang of
it. ......Look!");
SEPlay("EV_SE_522");
SEWait();
StlEye(2,0);
StlMouth(2,1);
VoicePlay("B050200000_02_070");
MsgDisp("Sassa","Yeah......");
MsgDisp("主人公","｛颯砂＊＊｝?");
StlEye(2,0);
StlMouth(2,0);
StlCheek(2,10);
VoicePlay("B050200000_02_080");
MsgDisp("Sassa","——Eh?
Ah, yeah. That's good.");
MsgDisp("主人公","Right? Ah, ｛颯砂＊＊｝, want to take over?");
StlEye(2,0);
StlMouth(2,0);
StlEyeOpenLevel(2,5);
VoicePlay("B050200000_02_090");
MsgDisp("Sassa","Nope, it's fine like this.");
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr500",0);
Wait(60);
ChOpen(2,255,0,2,4,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛颯砂＊＊｝, are you not good with milk?");
VoicePlay("B050200000_02_100");
MsgDisp("Sassa","I can drink it.
But isn't it kind of warm?");
MsgDisp("主人公","Freshly squeezed is delicious though.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
VoicePlay("B050200000_02_110");
MsgDisp("Sassa","Haha, yeah, it's special because you
squeezed it, huh?");
MsgDisp("主人公","Come to think of it.
｛颯砂＊＊｝ didn't try at all.
......Ah, maybe it's because——");
ChEye(2,5);
ChMouth(2,0);
ChMotion(2,0);
ChCheek(2,10);
VoicePlay("B050200000_02_120");
MsgDisp("Sassa","W-What?");
MsgDisp("主人公","Are you afraid of cows?");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("B050200000_02_130");
MsgDisp("Sassa","......Hahaha.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,4);
ChCheek(2,0);
VoicePlay("B050200000_02_140");
MsgDisp("Sassa","You're right.
I should try to enjoy it more normally.");
MsgDisp("主人公","???");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("B050200000_02_150");
MsgDisp("Sassa","Alright, onto the next.");
MsgDisp("主人公","(Enjoy it normally...... ｛颯砂＊＊｝, how
did you enjoy it then? )");
BGMStop();
ChPrmTblAdd(2,0);
