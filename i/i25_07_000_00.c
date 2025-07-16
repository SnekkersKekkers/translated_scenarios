BGOpen("ar600",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    VoicePlay("I250700000_07_000");
    MsgDisp("Mikage","A part-time job at a bookstore.
That's very high school-like.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝.
Is that so?
I like books, so......");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("I250700000_07_010");
    MsgDisp("Mikage","You should do what you like.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("I250700000_07_020");
    MsgDisp("Mikage","Making friends at school and at work is
something you can only do now, right?
Keep it up.");
    MsgDisp("主人公","Ah, okay.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("I250700000_07_030");
    MsgDisp("Mikage","See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    MsgDisp("主人公","(Huh......
｛御影＊＊｝, didn't you
come to look for books?)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    MsgDisp("主人公","(Alright.
Is that all the new books?)");
    VoicePlay("I250700000_07_040");
    MsgDisp("Mikage?","Yo, you hard-working, serious girl.");
    MsgClose();
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","Hm, ｛御影＊＊｝?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("I250700000_07_050");
    MsgDisp("Mikage","I was in the area, so I thought I'd come
by.
Show me how you work for a bit.");
    MsgDisp("主人公","Huh?");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("I250700000_07_060");
    MsgDisp("Mikage","You can't?");
    VoicePlay("I250700000_42_000");
    MsgDisp("Manager","Help at cash, please!");
    MsgDisp("主人公","Ah, ｛御影＊＊｝, sorry.
Excuse me.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("I250700000_07_070");
    MsgDisp("Mikage","Sorry for the bother.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("I250700000_07_080");
    MsgDisp("Mikage","Maybe I'll get a part-time job somewhere
too?");
    MsgDisp("主人公","Huh!?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("I250700000_07_090");
    MsgDisp("Mikage","Ah, I was half-joking.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    MsgDisp("主人公","(Then, he was half-serious......?
Does ｛御影＊＊｝ really
want a part-time job?)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Haa, there were a lot of customers
today.)");
    MsgClose();
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("I250700000_07_100");
    MsgDisp("Mikage","｛主人公｝, you look busy.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝, welcome.
The store is quite busy today.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,4);
    VoicePlay("I250700000_07_110");
    MsgDisp("Mikage","I see.
Sorry if I bothered you.
See you.");
    ChClose(7);
    MsgDisp("主人公","Ah, ｛御影＊＊｝......
Thank you very much!");
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgDisp("主人公","(Phew, I'm done.
The store might finally be calming down.)");
    MsgDisp("主人公","(｛御影＊＊｝ came all that way just to
check on me......)");
    VoicePlay("I250700000_42_010");
    MsgDisp("Manager","Just now, your homeroom teacher came by
with gifts for everyone.");
    MsgDisp("主人公","Huh?
｛御影＊＊｝ brought
gifts?");
    VoicePlay("I250700000_42_020");
    MsgDisp("Manager","Yeah, a lot of milk ice cream.
He got one for me, too.
Let's hand them out.");
    MsgDisp("主人公","(Thank you, ｛御影＊＊｝.
We'll all eat happily!)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
