BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3,1);
ScrFadeIn(0);
VoicePlay("B050300100_03_000");
MsgDisp("Honda","Hey, isn't it about time we eat lunch?
I want to eat at the beach club.");
MsgDisp("主人公","Sure, that's sounds good.
What do you want to eat?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1);
ChEyeOpenLevel(3,0);
VoicePlay("B050300100_03_010");
MsgDisp("Honda","Without a doubt, Ramen!");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("B050300100_03_020");
MsgDisp("Honda","I'm really craving the beach club's
ramen.");
MsgDisp("主人公","Hehe, that's fine!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("B050300100_03_030");
MsgDisp("Honda","Let's get going then.
We need to find a table before it gets
crowded!");
SEPlay("EV_SE_561",0,0.4);
BGMStop();
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChClose(3);
Wait(60,0);
StlOpen("ev_03_02");
StlEye(3,1);
StlMouth(3,0);
BGMPlay("BGM_C03_HONDA_I",0.01);
ScrFadeIn(0);
VoicePlay("B050300100_03_040");
MsgDisp("Honda","Look look!");
StlEye(3,0);
StlMouth(3,0);
SEStop("EV_SE_574",1);
VoicePlay("B050300100_03_050");
MsgDisp("Honda","Try picking the ramen up with your
chopsticks. Aren't the noodles crazy
long～? Look!");
MsgDisp("主人公","You're right!
Maybe they're stuck together?");
StlEye(3,1);
StlMouth(3,0);
StlEyeOpenLevel(3,5,1);
VoicePlay("B050300100_03_060");
MsgDisp("Honda","No way.
They're \"Longevity Noodles\"∋");
MsgDisp("主人公","Longevity Noodles?");
StlEye(3,0);
StlMouth(3,0);
VoicePlay("B050300100_03_070");
MsgDisp("Honda","That's right! It's a type of handmade
noodles. They make them by stretching the
dough long and thin without any cutting.");
StlEye(3,1);
StlMouth(3,0);
VoicePlay("B050300100_03_080");
MsgDisp("Honda","The word \"Longevity\" comes from how long
they are. It's said that if you eat them a
lot, you'll live a long life.");
MsgDisp("主人公","These are those \"Longevity Noodles\"?");
StlEye(3,0);
StlMouth(3,0);
StlEyeOpenLevel(3,5,1);
VoicePlay("B050300100_03_090");
MsgDisp("Honda","At a beach club too∋
That's really interesting!");
StlEye(3,0);
StlMouth(3,0);
VoicePlay("B050300100_03_100");
MsgDisp("Honda","......If we don't eat them quickly enough,
they'll get soggy.
Thanks for the food!");
MsgDisp("主人公","Hehe, thanks for the food.");
MsgClose();
ScrFadeOut(0);
StlClose();
VoicePlay("B050300100_03_110");
MsgDisp("Honda",".........Mm!
Mm-, mm!");
MsgDisp("主人公","A-Are you okay∋");
MsgClose();
ChOpen(3,31,0,0,0,#1,#1,0,0,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMVol(0.5,2);
ScrFadeIn(0);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1);
ChEyeOpenLevel(3,0);
VoicePlay("B050300100_03_120");
MsgDisp("Honda","Ha, I ate so much!
Like I thought, the noodles weren't stuck
together.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,5);
VoicePlay("B050300100_03_130");
MsgDisp("Honda","I know! We have to eat some real longevity
noodles someday. Someone recommended me a
store.");
MsgDisp("主人公","Hehe, I would love to.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3);
VoicePlay("B050300100_03_140");
MsgDisp("Honda","We have to go.
Let's eat them and live a long life
together!");
MsgDisp("主人公","(......Hm? He just said something
crazy......)");
BGMStop();
ChPrmTblAdd(3,0);
