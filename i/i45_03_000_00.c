BGOpen("ar200",0);
MsgClose();
ChOpen(3,255,0,0,0,#1,#1,0,0);
BGMPlay("BGM_C03_HONDA_A");
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I450300000_03_000");
    MsgDisp("Honda","Ah, it really is you.");
    MsgDisp("主人公","｛本多＊＊｝∋");
    ChEye(3,3);
    ChMouth(3,0);
    ChMotion(3,4,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I450300000_03_010");
    MsgDisp("Honda","When I was passing by, I thought I saw
someone I knew so I came to peek in a
little.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,2,1);
    VoicePlay("I450300000_03_020");
    MsgDisp("Honda","Wow, working at a flower shop, huh.");
    MsgDisp("主人公","Yeah.
I'm still just a fledgeling, though.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("I450300000_03_030");
    MsgDisp("Honda","I don't think so.
The apron looks great on you, too.");
    MsgDisp("主人公","Hehe, thanks.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I450300000_03_040");
    MsgDisp("Honda","Well, I'm gonna go, but keep up the good
work!");
    MsgDisp("主人公","(Alright, let's work hard to be a
full-fledged worker soon!)");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoiceEVSPlay(3);
    VoicePlay("I450300000_03_050");
    MsgDisp("Honda","｛主人公｝, working hard?");
    MsgDisp("主人公","Ah, ｛本多＊＊｝, welcome.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,2,1);
    VoicePlay("I450300000_03_060");
    MsgDisp("Honda","Wow...... this shop has some pretty rare
flowers, doesn't it?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("I450300000_03_070");
    MsgDisp("Honda","Ah, speaking of rare flowers, have you
heard of the blue rose?");
    MsgDisp("主人公","I haven't seen many......");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,3,1);
    VoicePlay("I450300000_03_080");
    MsgDisp("Honda","Right, right. I don't think a lot of
people have seen it. So it used to be a
symbol of \"things that don't exist\"-");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I450300000_03_090");
    MsgDisp("Honda","But, in recent years, genetic
modifications and technology teamed up
and......! The blue rose was born.");
    MsgDisp("主人公","......Ah, sorry.
A customer's here.");
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("I450300000_03_100");
    MsgDisp("Honda","Da, I'm sorry for bothering you......
I'll get going, okay?
See you.");
    MsgDisp("主人公","(He came to check on me, right? But you
know, I feel like ｛本多＊＊｝ might know
more about flowers than me......)");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("I450300000_03_110");
    MsgDisp("Honda","You're working hard.
Already got the hang of it?");
    MsgDisp("主人公","Perfectly! Is what I want to say, but
there's so much to remember......");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("I450300000_03_120");
    MsgDisp("Honda","Really? You seem pretty good at helping
customers from what I've seen, though?");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I450300000_03_130");
    MsgDisp("Honda","If it was me, I'd start talking too much
and wasting their time.");
    MsgDisp("主人公","What you talk about is interesting, so
maybe it'd end up being popular,
｛本多＊＊｝.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("I450300000_03_140");
    MsgDisp("Honda","If you flatter me too much, I might end up
taking you seriously, you know?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I450300000_03_150");
    MsgDisp("Honda","But, rather than having a bunch of people
listen to me talk, I'm already satisfied
if it's just you.");
    MsgDisp("主人公","Huh......");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("I450300000_03_160");
    MsgDisp("Honda","Let's take our time talking when you're
not working, okay?
Well, do your best!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(3);
    MsgDisp("主人公","(Satisfied with just me......?
I feel like he just said something
amazing......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
