BGOpen("ho210",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Come to think of it, it's already
Christmas...I wonder if Kuya-san is still
working hard.)");
SEPlay("EV_SE_577");
MsgDisp("主人公","(Ah...a private number!)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex300",2);
MsgClose();
SEWait();
ChOpen(9,255,0,3,0,6,#1,5,0);
BGMPlay("BGM_XMAS_TRHEE",0.01);
ScrFadeIn(0);
VoicePlay("D030901700_09_000");
MsgDisp("Kuya","It's beautiful, huh...");
MsgDisp("主人公","Yeah...
It's somewhat soothing.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,0);
VoicePlay("D030901700_09_010");
MsgDisp("Kuya","I'm glad.
I feel the same way.");
MsgDisp("主人公","Hehe.");
ChEye(9,2);
ChMouth(9,0);
ChMotion(9,0,1);
VoicePlay("D030901700_09_020");
MsgDisp("Kuya","But you know...I'm sorry. Even though it's
Christmas, I didn't bring you a gift.");
MsgDisp("主人公","It's fine.
I didn't bring anything either.");
MsgClose();
ScrFadeOut(0);
ChClose(9);
StlOpen("ev_09_03");
StlBase(9,0);
StlEye(9,0);
StlMouth(9,0);
StlCheek(9,10);
ScrFadeIn(0);
VoicePlay("D030901700_09_030");
MsgDisp("Kuya","That's not true.
I already got a present from you.");
MsgDisp("主人公","Eh?");
StlEye(9,0,0);
StlMouth(9,0);
StlEyeOpenLevel(9,5,1);
VoicePlay("D030901700_09_040");
MsgDisp("Kuya","This moment——");
StlBG(1,1,60);
StlBase(9,1);
StlEffect(1,1);
StlEye(9,3);
StlMouth(9,2);
StlMouthOpenLevel(9,10);
VoicePlay("D030901700_09_050");
MsgDisp("Kuya","∈");
StlMouth(9,1);
MsgDisp("主人公","Amazing...
Everything is sparkling!");
StlEye(9,2);
VoicePlay("D030901700_09_060");
MsgDisp("Kuya","It really is amazing...
It looks magical.");
MsgDisp("主人公","Hehe.");
StlEye(9,1);
StlMouth(9,1);
VoicePlay("D030901700_09_070");
MsgDisp("Kuya","I was able to get such a wonderful present
from you and this city.");
StlEye(9,1);
StlMouth(9,1);
VoicePlay("D030901700_09_080");
MsgDisp("Kuya","It almost feels unreal that just a year
ago, I was just drifting along like an
empty shell of a person.");
MsgDisp("主人公","An empty shell, how so...");
StlEye(9,1,0);
StlMouth(9,1);
StlEyeOpenLevel(9,5,1);
VoicePlay("D030901700_09_090");
MsgDisp("Kuya","It's true.
If it weren't for you, I would still have
that strange hero complex.");
StlEye(9,4);
StlMouth(9,2);
VoicePlay("D030901700_09_100");
MsgDisp("Kuya","You brought me back to reality and kept me
grounded.
Like an Angel descended to Earth.");
MsgDisp("主人公","Kuya-san...");
MsgClose();
ScrFadeOut(0);
StlClose();
BGOpen("ex290",2);
ChLayout(0);
MsgClose();
ChOpen(9,255,0,3,0,8,#1,8,0);
ScrFadeIn(0);
VoicePlay("D030901700_09_110");
MsgDisp("Kuya","...This is the kind of atmosphere lovers
kiss in.");
MsgDisp("主人公","Eh?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,0);
VoicePlay("D030901700_09_120");
MsgDisp("Kuya","Haha.
Don't worry, I won't do that.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,6);
VoicePlay("D030901700_09_130");
MsgDisp("Kuya","And that already happened, huh?
We kissed once.");
MsgDisp("主人公","! That was...");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,0);
VoicePlay("D030901700_09_140");
MsgDisp("Kuya","You're blushing.
Haha!");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
VoicePlay("D030901700_09_150");
MsgDisp("Kuya","I'm really happy I met you.
...Merry Christmas.");
MsgDisp("主人公","Merry Christmas, Kuya-san.");
MsgClose();
ScrFadeOut(0);
ChLayout(1);
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ScrFadeIn(0);
VoicePlay("D030901700_09_160");
MsgDisp("Kuya","I got such a big present this year.");
MsgDisp("Kuya","Now it's time for the final push, I'll
study hard and get into the same
university as you.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,10);
VoicePlay("D030901700_09_170");
MsgDisp("Kuya","The next time we meet, it will finally be
over.");
MsgDisp("主人公","(Kuya-san...\"
Be over\"...maybe he means the exam?
I have to work hard too.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
