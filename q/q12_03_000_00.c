BGOpen("sc810",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoiceEVSPlay(3);
    VoicePlay("Q120300000_03_000");
    MsgDisp("Honda","｛主人公｝, thanks for going with
me for the free period.");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("Q120300000_03_010");
    MsgDisp("Honda","I pulled you around, aren't you tired?");
    MsgDisp("主人公","Nope.
Thanks to our fun guide, I'm not tired at
all.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5,1);
    VoicePlay("Q120300000_03_020");
    MsgDisp("Honda","Really?
It's our last night, but let's enjoy the
rest!");
    MsgDisp("主人公","Hehe, yeah.");
    break ;
    case 3:
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("Q120300000_03_030");
    MsgDisp("Honda","The free activity is over.
It was sooo fun.");
    MsgDisp("主人公","Yeah, thanks to you, ｛本多＊＊｝,
it was very fulfilling.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("Q120300000_03_040");
    MsgDisp("Honda","I had a lot of discoveries, by looking
around with you.
Thank you.");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,2,1);
    VoicePlay("Q120300000_03_050");
    MsgDisp("Honda","One regret is...
I wish I could have eaten the Champon in
Nagasaki's Chinatown for comparison.");
    MsgDisp("主人公","Maybe we'll have it for dinner tonight?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5,1);
    VoicePlay("Q120300000_03_060");
    MsgDisp("Honda","That's right!
There's still hope∈");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoiceEVSPlay(3);
    VoicePlay("Q120300000_03_070");
    MsgDisp("Honda","｛主人公｝, you're amazing.
I'm gonna peek into the kitchen!");
    MsgClose();
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
    ChClose(3);
    SEWait();
    MsgDisp("主人公","(Hehe!
I'm happy I was able to look around with
｛本多＊＊｝ )");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Haah...
So the school trip is over tomorrow.
Early, isn't it?");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("Q120300000_03_080");
    MsgDisp("Honda","Yeah.
Y'know, I really got to like Nagasaki with
this trip.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("Q120300000_03_090");
    MsgDisp("Honda","One of the reasons is, you.");
    MsgDisp("主人公","Eh, me?");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("Q120300000_03_100");
    MsgDisp("Honda","I mean, there isn't a place I dislike
where I went with you.
...Hmm?");
    ChEye(3,2);
    ChMouth(3,3);
    ChMotion(3,5,1);
    VoicePlay("Q120300000_03_110");
    MsgDisp("Honda","Daaah, in the way I put it, Nagasaki is no
longer relevant, I guess?");
    MsgDisp("主人公","Hehe, but it's also true for me that
anywhere with you, ｛本多＊＊｝,
becomes fun.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("Q120300000_03_120");
    MsgDisp("Honda","Is that so? Then I'm happy! Well then,
let's spend the free period together
again.");
    MsgDisp("主人公","Eh, hmm?
Isn't today the end of the school trip?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("Q120300000_03_130");
    MsgDisp("Honda","Yes, but even if you go back to Habataki
City, you can still do free activities,
right?");
    MsgDisp("主人公","Hmm, I see.
I guess so.");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("Q120300000_03_140");
    MsgDisp("Honda","I hope we can continue spending free
period together like this forever.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("Q120300000_03_150");
    MsgDisp("Honda","See you then!");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(3);
    MsgDisp("主人公","(Forever...?
I wonder what he meant...?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
