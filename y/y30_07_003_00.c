BGMPlay("BGM_C07_MIKAGE_C",0.01);
MsgType(3);
BGOpen("ad730",0);
ScrFadeIn(0);
VoicePlay("Y300700300_07_000");
MsgDisp("Mikage","\"I'll plant it here. I wonder what
colour the tulip will bloom into. I'm
looking forward to it.\"");
MsgDisp("","The Gardening Club's farming
corner. We planted Nagasaki's
sepcialty bulb.");
MsgDisp("","These are the bulbs left after 
I gave some to that girl.");
MsgClear();
SEPlay("EV_SE_821");
Wait(60,0);
MsgDisp("","Another thing I can look 
forwards to in the spring.
There's a lot of plants planted here.");
MsgDisp("","Each one has someone's wishes put
into them. When you look at it like
that, it is divine to look at.");
MsgClear();
SEPlay("EV_SE_627",0,0.6);
SEWait();
MsgDisp("主人公","\"Ah, ｛御影＊＊｝!
What are you planting?\"");
MsgDisp("","Perfect timing.
It's funny, since this kid 
has those kinds of qualities.");
MsgClear();
VoicePlay("Y300700300_07_010");
MsgDisp("Mikage","\"These are what's left of the MVP
prize.\"");
MsgDisp("主人公","\"They're tulip bulbs, right?\"");
MsgDisp("","For the MVP prize, I gave the tullip
bulbs I got as a souvenir from
Nagasaki on our school trip.");
MsgDisp("主人公","\"Can I plant some here too?\"\"");
MsgDisp("","Her smile is as lively as a plant
damp with morning dew.");
MsgClear();
VoicePlay("Y300700300_07_020");
MsgDisp("Mikage","\"I don't mind? Then, bring some bulbs
here next time.\"");
MsgDisp("主人公","\"I'll bring them now\"");
MsgDisp("","Haha, is she walking to get them?
She really is a funny person.");
SEPlay("EV_SE_672",0,0.6);
SEWait();
MsgClear();
MsgDisp("","I think the way I call her
'Miss Serious' is seriously a perfect
nickname for her.");
MsgDisp("","She's much more serious and earnest
than most people, but when I see her,
I naturally unintentionally smile.");
MsgDisp("","That's the kind of girl she is.");
MsgClear();
MsgDisp("主人公","\"I planted them next to ｛御影＊＊｝
's bulbs.'\"");
VoicePlay("Y300700300_07_030");
MsgDisp("Mikage","\"Uh-huh. When they bloom, we can tell
our fortunes based off the colour of
the flowers.\"");
MsgDisp("主人公","\"Hehe! Yes, I look forwards to it.\"");
SEPlay("EV_SE_SCHOOL_001");
Wait(60,0);
VoicePlay("Y300700300_07_040");
MsgDisp("Mikage","\"That's the warning bell.
The afternoon lessons are starting.\"");
SEStop("EV_SE_SCHOOL_001",4);
MsgClear();
MsgDisp("","Tulip flower fortune telling uses the
language of flowers to give a
different meaning for each flower.");
MsgDisp("","I cheated a little, 
And gave Miss Serious a bulb
that would bloom into pink.");
MsgDisp("","After all, that's the prize for the
ＭＶＰ.");
BGMStop();
MsgClear();
MsgClose();
ScrFadeOut(0);
MsgType(0);
