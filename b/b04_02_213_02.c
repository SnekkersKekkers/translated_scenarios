BGOpen("tr220",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040221302_02_000");
MsgDisp("Sassa","I'd like to try owning a dog someday.");
MsgSel("Yeah, I want one!","I prefer cats?","It'd be tough raising one?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,2);
    VoicePlay("B040221302_02_010");
    MsgDisp("Sassa","That's rightー.
Hey, that big one over 
there is cool.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040221302_02_020");
    MsgDisp("Sassa","...So, in the future, we might end up
with both a dog and a cat? 
That sounds good too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,4);
        VoicePlay("B040221302_02_030");
        MsgDisp("Sassa","I know.
The fact that it's hard makes 
it all the more fun.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,4);
        VoicePlay("B040221302_02_040");
        MsgDisp("Sassa","I know.
Just walking my acquaintances
dogs is already tough.");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040221302_02_050");
        MsgDisp("Sassa","...But, you know, 
the hard work also makes it fun.
Like running together.");
        MsgDisp("主人公","I see.
But is there a doggy that
can keep up with ｛颯砂＊＊｝ 's running?'");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,5);
        VoicePlay("B040221302_02_060");
        MsgDisp("Sassa","There is, there is.
Not only is therem but I would 
completely lose to it too.");
        MsgDisp("主人公","Eh? Really?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,5);
        VoicePlay("B040221302_02_070");
        MsgDisp("Sassa","Some breeds can run at 70 kilometers per
hour. Even the fastest humans can only do
about 40 kilometers per hour.");
        MsgDisp("主人公","I see.
Then if you could beat a dog, 
｛颯砂＊＊｝ could be world championn.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040221302_02_080");
        MsgDisp("Sassa","Oh, definitely.
Maybe I should get a dog 
as a training partner then.");
        MsgDisp("主人公","Hehe, might be good/
Then you could compete
against the dog everyday.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040221302_02_090");
        MsgDisp("Sassa","Then you'll have to join us
for the morning walks.
As a witness.");
        MsgDisp("主人公","(Hehe, walking with ｛颯砂＊＊｝ and a
doggy every morning... seems fun.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
