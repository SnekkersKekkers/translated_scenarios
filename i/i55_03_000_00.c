BGOpen("ar500",0);
MsgClose();
BGMPlay("BGM_C03_HONDA_A");
ChOpen(3,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("I550300000_03_000");
    MsgDisp("Honda","Ah, you're working hard.");
    MsgDisp("主人公","Hm, ｛本多＊＊｝?
What's up?");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("I550300000_03_010");
    MsgDisp("Honda","I found you when I was passing by earlier.
You should've told me that you got a
part-time job here!");
    MsgDisp("主人公","It's a little embarrassing to go out of my
way to tell you...");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("I550300000_03_020");
    MsgDisp("Honda","Why?
The uniform suits you too, you know?");
    MsgDisp("主人公","Y-You think so?
Thanks.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I550300000_03_030");
    MsgDisp("Honda","No prob!
Work hard, 'kay?
See you.");
    MsgDisp("主人公","(It suits me...
It makes me happy that ｛本多＊＊｝ said
that.)");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I550300000_03_040");
    MsgDisp("Honda","Hello.");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
Welcome.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("I550300000_03_050");
    MsgDisp("Honda","I was thinking of buying some Japanese
sweets as a gift, and I remembered that
you work here.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I550300000_03_060");
    MsgDisp("Honda","So, I'd like to know what you recommend.");
    MsgDisp("主人公","What I recommend...
Who are you giving the gift to?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("I550300000_03_070");
    MsgDisp("Honda","Someone who's been helping out my father.
I was thinking that some dried fruits that
keep for a while would be good.");
    MsgDisp("主人公","If it's like that, then...");
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I550300000_03_080");
    MsgDisp("Honda","Thanks!
Your sense for this kind of thing is good.
Well, good luck with work.");
    MsgDisp("主人公","(I'm happy ｛本多＊＊｝ complimented me!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛本多＊＊｝, welcome.
Running an errand?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I550300000_03_090");
    MsgDisp("Honda","Right, right.
Getting some snacks to go with tea for the
guests coming in the afternoon.");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("I550300000_03_100");
    MsgDisp("Honda","Wow, is this new?
It looks a bit like a paste...");
    MsgDisp("主人公","It's sweet potato paste.
The mild sweetness makes it popular with
our younger customers.");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,2,1);
    VoicePlay("I550300000_03_110");
    MsgDisp("Honda","...Hehe.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I550300000_03_120");
    MsgDisp("Honda","Ah, sorry. You're getting used to customer
service, huh? You know a lot about the
products.");
    MsgDisp("主人公","I won't give you anything even if you
compliment me, you know?");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("I550300000_03_130");
    MsgDisp("Honda","I meant what I said. Rather than just
promoting it because it's new, you
actually know what's special about it.");
    MsgDisp("主人公","Hehe, thanks.
...By the way, are you doing okay on time?");
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,5,1);
    VoicePlay("I550300000_03_140");
    MsgDisp("Honda","Ah, oh no!
I have to get back before the guests come!
Could you pack up the new product, too?");
    MsgDisp("主人公","Hehe, thank you for your purchase.");
    MsgDisp("主人公","(｛本多＊＊｝ praised me!
Let's keep up the good work!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
