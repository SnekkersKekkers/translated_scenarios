BGOpen("ar300",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_589");
    Wait(50,0);
    MsgDisp("主人公","Thank you very much～!");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,255,0,0,0,#1,#1,0,0);
    VoicePlay("I650100000_01_000");
    MsgDisp("Kazama","I see, so you were the cause.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
What is it?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I650100000_01_010");
    MsgDisp("Kazama","Your voice is drawing the customers in.");
    MsgDisp("主人公","Um, I don't think...");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("I650100000_01_020");
    MsgDisp("Kazama","Well, not like I'm one to talk.");
    MsgDisp("主人公","Are you here for gasoline too,
｛風真＊＊｝?");
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("I650100000_01_030");
    MsgDisp("Kazama","I walked here, though?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I650100000_01_040");
    MsgDisp("Kazama","Keep your smiling in moderation.
If you go all out, there's going to be a
traffic jam in this area.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(Did he come to check on me?
Alright, let's work hard!)");
    break ;
    case 3:
    SEPlay("EV_SE_519");
    Wait(50,0);
    MsgDisp("主人公","Welcome!");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,255,0,0,3,#1,#1,0,0);
    VoicePlay("I650100000_01_050");
    MsgDisp("Kazama","You're energetic.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.
What's up?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I650100000_01_060");
    MsgDisp("Kazama","What.
Is it that weird that I'd come to a gas
station?");
    MsgDisp("主人公","Not at all.
But, are you refuelling something?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("I650100000_01_070");
    MsgDisp("Kazama","I don't run on gasoline.");
    MsgDisp("主人公","Geez, I know that.");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I650100000_01_080");
    MsgDisp("Kazama","...Haa, thanks for the full tank of high
octane.");
    MsgDisp("主人公","Huh?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I650100000_01_090");
    MsgDisp("Kazama","Just seeing your smile like this means
I'll be okay for a while.");
    MsgDisp("主人公","｛風真＊＊｝?");
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("I650100000_01_100");
    MsgDisp("Kazama","Ah, but careful you don't do this too much
for other customers, okay?
See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(Hehe, but I think only
｛風真＊＊｝ could be fully
refueled with just a smile, you know?)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_657");
    Wait(50,0);
    MsgDisp("主人公","Thank you very much!");
    SEStop("EV_SE_657",2);
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    Wait(90,0);
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,255,1,1,1,#1,#1,0,0);
    MsgDisp("主人公","Ah, ｛風真＊＊｝.
What's up?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    VoicePlay("I650100000_01_110");
    MsgDisp("Kazama","I was in the area.
... Hey, does that guy come often?");
    MsgDisp("主人公","Yeah, he's a regular, you know?");
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("I650100000_01_120");
    MsgDisp("Kazama","Hey, get a different part-time job.");
    MsgDisp("主人公","Huh∋
Why?");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,3);
    VoicePlay("I650100000_01_130");
    MsgDisp("Kazama","What are you going to do if you get caught
up by something like that when I'm not
here?");
    MsgDisp("主人公","Um, I'll be fine?
Their cars are crazy, but they're nice
people.");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("I650100000_01_140");
    MsgDisp("Kazama","Is that so?");
    MsgDisp("主人公","Yeah, their hobby is restoring cars.
They're fashionable and fun old-timers.");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("I650100000_01_150");
    MsgDisp("Kazama","Fun old-timers?");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("I650100000_01_160");
    MsgDisp("Kazama","Ah, I see.
... Geez.
Don't make me worry.");
    MsgDisp("主人公","They jokingly ask me if I want a ride
pretty often.");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,3);
    VoicePlay("I650100000_01_170");
    MsgDisp("Kazama","It's no good after all.");
    MsgDisp("主人公","Huh?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("I650100000_01_180");
    MsgDisp("Kazama","Listening? Your powers of attraction work
on all ages. Keep your smiles at just 20%.");
    MsgDisp("主人公","Geez!
What are you talking about?");
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,3);
    VoicePlay("I650100000_01_190");
    MsgDisp("Kazama","Right, right, just like that.
It's okay to look angry.
See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(Geez...
I can't help customers with an angry
face.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
