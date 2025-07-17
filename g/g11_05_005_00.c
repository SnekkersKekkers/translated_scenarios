BGOpen("sc609",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I guess it's about time to finish working
for today...)");
VoiceEVSPlay(5);
VoicePlay("G110500500_05_000");
MsgDisp("Hiiragi","｛主人公｝, I'll be a while so
I'll lock the door.");
MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
I've finished, so I'll help.");
MsgClose();
ScrFadeOut(0,0,30);
BGOpen("ev005",0);
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
ChOpen(5,100,1,1,1,12,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110500500_05_010");
MsgDisp("Hiiragi","Thank you very much. But, I'm almost done
too. If you don't mind, why don't we go
home together?");
MsgDisp("主人公","Of course.
Then, I'll do preparations for tomorrow
whilst I wait for you.");
ChEyeOpenLevel(5,#1);
VoicePlay("G110500500_05_020");
MsgDisp("Hiiragi","Yes.");
SEPlay("EV_SE_712",0,0.5);
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
VoicePlay("G110500500_05_030");
MsgDisp("Hiiragi","Ah... that's right.
There's something I've wanted to ask you
but I always forget.");
MsgDisp("主人公","Eh, what is it?");
SEStop("EV_SE_712",0);
SEPlay("EV_SE_712",0,0.5);
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
VoicePlay("G110500500_05_040");
MsgDisp("Hiiragi","A while ago, you said you would recommend
me some TV shoes you like.");
MsgDisp("主人公","Eh, I remember now...");
SEStop("EV_SE_712",0);
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
VoicePlay("G110500500_05_050");
MsgDisp("Hiiragi","Huh?
I was quite looking forward to it though?");
MsgDisp("主人公","Is that so?
I'm sorry.
What kind of genre do you like?");
ChMouth(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G110500500_05_060");
MsgDisp("Hiiragi","The other day I watched the documentary:
'Searching for Strange Festivals Around
Japan' and I enjoyed it.");
MsgDisp("主人公","Strange festivals?");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G110500500_05_070");
MsgDisp("Hiiragi","Yes, it introduced me to a variety of
stall foods. And how Yakisoba differs in
different places.");
ChMouth(5,0);
ChMotion(5,2);
MsgDisp("主人公","(｛柊＊＊＊｝, It seems like you're more
interested in Yakisoba than the festivals
themselves... Maybe I should show him some
B-grade gourmet food TV shows?)");
ChMotion(5,0);
BGMStop();
MsgClose();
ScrFadeOut(0,0);
