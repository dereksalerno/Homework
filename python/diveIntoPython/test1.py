def BuildConnectionString(params):
    """Build a connection string from a dictionary of parameters.
    
    Returns string."""
    
    return ";".join(["%s=%s" % (k, v) for k, v in params.items()])

a = {"Jonesie", "Stigglepuss"}
#b = "stigglepuss"
c = BuildConnectionString(a)
print c
