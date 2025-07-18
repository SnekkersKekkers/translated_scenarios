MsgType(3);
BGOpen("ad150",0);
BGMPlay("BGM_C01_RYOUTA_E",0.01);
SEPlay("EV_SE_813");
ScrFadeIn(0);
Wait(150,0);
SEStop("EV_SE_813");
VoicePlay("Y300100500_01_000");
MsgDisp("Kazama","\"Hearing the sound of cooking, it's
like we're a newlywed household.\"");
MsgDisp("主人公","\"Ehh?
Are we not?\"");
MsgDisp("","｛主人公名前｝, from time
to time, will come to my house and
cook for me.");
MsgClear();
MsgDisp("","After I graduated and while I'm
studying in university, I'll help out
at my Grandpa's shop.");
MsgDisp("","Even though she's supposed to be busy
with her new life too, she'll still
be overly helpful like this.");
VoicePlay("Y300100500_01_010");
MsgDisp("Kazama","\"I see, are we newlyweds?\"");
MsgDisp("主人公","\"Hey...\"");
MsgClear();
MsgDisp("","I haven't told anyone that we had our
ceremony at the church on graduation
day.");
MsgDisp("","Seems like it'll be a while before we
hold a ceremony in front of our
family and friends.");
MsgClear();
MsgDisp("主人公","\"Whenever is fine with me?\"");
MsgDisp("","Whether we're just taking the fact my
parents are in England into
consideration, or just purely
enjoying the moment, we're not really
sure.");
MsgClear();
MsgDisp("主人公","\"\"Yes, sorry to have kept you
waiting.\"");
SEPlay("EV_SE_827",0,0.5);
SEWait();
SEPlay("EV_SE_002");
SEWait();
MsgDisp("主人公","\"This is the English lunch plate
｛風真＊＊｝ once treated
me to.\"");
MsgDisp("","Bacon, mushroom, eggs, baked beans,
grilled tomatoes and fried fish.");
MsgClear();
VoicePlay("Y300100500_01_020");
MsgDisp("Kazama","\"This looks way better than the one I
made.\"");
MsgDisp("","She watches me eat energetically,
with a happy expression on her face.");
MsgDisp("主人公","\"...Hey, is it good?\"");
MsgClear();
MsgDisp("","I nodded greatly, and softly put a
hand on ｛主人公名前｝'s
head.'");
MsgDisp("主人公","\"｛風真＊＊｝...?\"");
VoicePlay("Y300100500_01_030");
MsgDisp("Kazama","\"It's truly delicious...\"");
MsgClear();
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClear();
BGOpen("ad151",0);
ScrFadeIn(0);
MsgDisp("主人公","\"Your room is just the same as it was
in elementary school,
｛風真＊＊｝. \"");
VoicePlay("Y300100500_01_040");
MsgDisp("Kazama","\"I've been thinking about changing it
up a little though.\"");
MsgDisp("","This room is filled with so much of
my feelings.");
MsgClear();
MsgDisp("","I want the me from back then to know
that I'm with
｛主人公名前｝ like this.");
MsgDisp("","I think it's fine to leave it like
this...until we move to our new
home.");
MsgClear();
MsgClose();
BGMStop();
ScrFadeOut(0,0);
MsgType(0);
