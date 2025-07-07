BGMStop(1.7);
Wait(100,0);
BGOpen("sc770",2);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(My last Christmas in high 
school is over...)");
MsgDisp("主人公","(Which reminds me, ｛大地＊＊｝ is having a
Hanegasaki Christmas party and then
he's going on a ski trip.)");
MsgDisp("主人公","... Wish I could have gone with them.");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
VoiceEVSPlay(8);
VoicePlay("R080800000_08_000");
MsgDisp("Shirahane?","｛主人公｝.");
MsgDisp("主人公","Huh...");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(8,255,0,0,0,-1,-1,5,0);
MsgDisp("主人公","｛大地＊＊｝∋
What are you doing here...");
ChEye(8,4);
ChMouth(8,3);
VoicePlay("R080800000_08_010");
MsgDisp("Shirahane","Hehe.
I'm glad I made it just in time.");
MsgDisp("主人公","I thought there was a party at the
ski trip.");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
ChEyeOpenLevel(8,0);
VoicePlay("R080800000_08_020");
MsgDisp("Shirahane","Ya but... well, who cares? Today
is my last Christmas in high school,
and I wanted to see ya.");
MsgDisp("主人公","｛大地＊＊｝……");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("R080800000_08_030");
MsgDisp("Shirahane","I gotta lift on Santa's sleigh.
Wow～, reindeers sure are fast!");
MsgDisp("主人公","Hehe!");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,2,1);
VoicePlay("R080800000_08_040");
MsgDisp("Shirahane","I was riding on a reindeer with
a bright lantern on its head.");
MsgDisp("主人公","Ahaha!");
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("R080800000_08_050");
MsgDisp("Shirahane","...So, how about ya keep me company?");
MsgClose();
ScrFadeOut(0);
BGMStop();
ChEye(8,0);
ChMouth(8,3);
ChMotion(8,0,1);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex001",2);
ScrFadeIn(0);
VoicePlay("R080800000_08_060");
MsgDisp("Shirahane","So did ya have fun at the
Christmas party?");
MsgDisp("主人公","Yeah.
How about you, ｛大地＊＊｝?
Did you enjoy the ski trip?");
ChEye(8,0);
ChMouth(8,3);
ChMotion(8,0,1);
VoicePlay("R080800000_08_070");
MsgDisp("Shirahane","The skiing starts tomorrow. Today
I was just partying like you guys.");
MsgDisp("主人公","I see.");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,2,1);
VoicePlay("R080800000_08_080");
MsgDisp("Shirahane","I couldn't bring a lot of luggage
with me, so I couldn't get a proper
present but...");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
VoiceEVSPlay(8);
VoicePlay("R080800000_08_090");
MsgDisp("Shirahane","｛主人公｝, give me your hand.");
MsgDisp("主人公","Ah... okay.");
MsgClose();
ScrFadeOut(0);
ChClose(8);
SEPlay("EV_SE_504");
SEWait();
StlOpen("ev_08_09");
StlEye(8,1);
StlMouth(8,0);
StlCheek(8,10);
BGMPlay("BGM_XMAS_TRHEE",0.01);
ScrFadeIn(0);
Wait(40,0);
StlEye(8,1);
StlMouth(8,0);
StlEyeOpenLevel(8,5);
VoicePlay("R080800000_08_100");
MsgDisp("Shirahane","Ah... it's warm.
Your hand.");
MsgDisp("主人公","Hehe.
｛大地＊＊｝, your hands are cold...");
StlEye(8,0,0);
StlMouth(8,0);
StlEyeOpenLevel(8,0,1);
VoicePlay("R080800000_08_110");
MsgDisp("Shirahane","Really. I'm glad I get to
warm them now.");
StlEye(8,0);
StlMouth(8,0);
VoicePlay("R080800000_08_120");
MsgDisp("Shirahane","Before ya go-");
MsgClose();
SEPlay("EV_SE_659");
Wait(20,0);
StlNear(1,0,30);
StlEye(8,0,0);
StlMouth(8,0);
StlEyeOpenLevel(8,5,1);
SEWait();
Wait(30,0);
VoicePlay("R080800000_08_130");
MsgDisp("Shirahane","Merry Christmas.
A present from Santa Daichi▼");
MsgDisp("主人公","Is this... candy?
There's so many.");
StlEye(8,0);
StlMouth(8,0);
VoicePlay("R080800000_08_140");
MsgDisp("Shirahane","Didn't I tell you before? My school has
something called \"Brain Candy\". I got it
from the party today.");
MsgDisp("主人公","Huh, really?
That's so cool!");
StlEye(8,0,0);
StlMouth(8,0);
StlEyeOpenLevel(8,5,1);
VoicePlay("R080800000_08_150");
MsgDisp("Shirahane","... Pfft!
You are so nice and honest.");
StlEye(8,0,0);
StlMouth(8,1);
StlEyeOpenLevel(8,5,1);
VoicePlay("R080800000_08_160");
MsgDisp("Shirahane","Oh man...
I wish I could just skip skiing
and just stay with you.");
MsgDisp("主人公","Huh... but everyone
would be worried about you.");
StlEye(8,0,0);
StlMouth(8,0);
StlEyeOpenLevel(8,5,1);
VoicePlay("R080800000_08_170");
MsgDisp("Shirahane","I guess so...");
MsgClose();
EfctOpen(5);
Wait(120,0);
StlEye(8,2);
StlMouth(8,2);
MsgDisp("主人公","Ah... snow!
It's a white Christmas!");
StlEye(8,2,0);
StlMouth(8,0);
StlEyeOpenLevel(8,5,1);
VoicePlay("R080800000_08_180");
MsgDisp("Shirahane","Haha... there's so much.
What should I do?");
MsgDisp("主人公","Hehe.");
StlEye(8,0,0);
StlMouth(8,0);
StlEyeOpenLevel(8,5,1);
VoicePlay("R080800000_08_190");
MsgDisp("Shirahane","If I stay here like this, 
I won't be able to go back to camp.");
MsgDisp("主人公","I see...");
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0);
StlClose();
BGOpen("ex000",2);
MsgClose();
ChOpen(8,255,0,0,0,-1,-1,8,0);
ScrFadeIn(0);
VoicePlay("R080800000_08_200");
MsgDisp("Shirahane","Well then... our hangout for
today stops here.");
MsgDisp("主人公","... Okay. Thank you for spending
time with me. I had fun, ｛大地＊＊｝.");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
ChEyeOpenLevel(8,0);
VoicePlay("R080800000_08_210");
MsgDisp("Shirahane","Didn't I tell you?
I'm Santa. I need to give presents
to good boys and girls.");
MsgDisp("主人公","Hehe!");
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,0,1);
VoiceEVSPlay(8);
VoicePlay("R080800000_08_220");
MsgDisp("Shirahane","｛主人公｝, Merry Christmas.");
MsgDisp("主人公","Merry Christmas, ｛大地＊＊｝.");
VoicePlay("R080800000_08_230");
MsgDisp("Shirahane","Thank you... for being here.");
BGMStop(2.5);
MsgClose();
ScrFadeOut(0,0,120);
EfctClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40,0);
MsgDisp("主人公","(And so, that's how my last Christmas
Eve in high school ended...)");
MsgClose();
ChPrmTblAdd(8,0);
